#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <math.h>

// index = (i * total_column + j)

typedef struct matrix
{
    int row;
    int col;
    float *value;
} matrix;

//1. Create / Destroy
matrix* new_matrix(int a, int b) {
    matrix *new_matrix = malloc(sizeof(matrix));
    if (new_matrix == NULL) {
        return NULL;
    }
    new_matrix->row = a;
    new_matrix->col = b;
    new_matrix->value = malloc(sizeof(float) * a * b);
    if (new_matrix->value == NULL) {
        return NULL;
    }
    return new_matrix;
}
void free_matrix(matrix* m){
    
    if(m == NULL){
        return;
    }
    free(m->value);
    free(m);
}
matrix* new_random_matrix(int a,int b,float min,float max){
    //This first section is used to ansure that srand is only called once
    //is function is called multiple times in a second than srand will generate same seed and rand will give same number
    //In nut shell srand should onley be called once
    //here static int variable is permanet (untill code is running) variable which is only iniitiallized once when code compiles 
    static int is_seeded = 0;
    if(is_seeded == 0){
       srand(time(NULL));
       is_seeded = 1;
    }    

    matrix* new = new_matrix(a,b);
    if (new == NULL){
        return NULL;
    }
    new->row = a;
    new->col = b;
    int count = a*b;

    for(int i = 0;i < count;++i){
        new->value[i] = ((float)rand()/(float)RAND_MAX)*(max-min) + min;
    }
    return new;

}



//2. Fill / Input / Output
void set_matrix(matrix *ptr, int a, int b, float value) {
    ptr->value[a * (ptr->col) + b] = value;
}

matrix* array_matrix(float *arr, int a, int b) {
    matrix *c = new_matrix(a, b);
    if (c == NULL) {
        return NULL;
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            c->value[i * (b) + j] = arr[i * (b) + j];
        }
    }
    return c;
}

void fill_matrix(matrix *ptr, float value) {
    int temp = (ptr->col) * (ptr->row);
    for (int i = 0; i < temp; ++i) {
        ptr->value[i] = value;
    }
}

void print_matrix(matrix *ptr) {
    for (int i = 0; i < ptr->row; ++i) {
        for (int j = 0; j < ptr->col; ++j) {
            printf("%g  ", ptr->value[i * (ptr->col) + j]);
        }
        printf("\n");
    }
    printf("\n");
}


//3.copy / resize
matrix* copy_matrix(const matrix *old) {
    int count = (old->col) * (old->row);
    matrix *new = new_matrix(old->row, old->col);
    if(new == NULL){
        return NULL;
    }
    for (int i = 0; i < count; i++) {
        new->value[i] = old->value[i];
    }
    return new;
}

void reshape_matrix(matrix *m, int new_rows, int new_cols) {
    if (new_rows * new_cols != (m->col) * (m->row)) {
        printf("\033[0;31m");
        printf("invalid resize!");
        printf("\033[0m");
        return;
    }
    m->row = new_rows;
    m->col = new_cols;
}



//B. MATRIX OPERATIONS (CORE FEATURES)


matrix* add_matrix(const matrix *a, const matrix *b) {
    if (a->col != b->col || a->row != b->row) {
        return NULL;
    }
    matrix *c = new_matrix(a->row, a->col);
    if (c == NULL) {
        return NULL;
    }
    for (int i = 0; i < (a->row) * (a->col); ++i) {
        c->value[i] = a->value[i] + b->value[i];
    }
    return c;
}

matrix* subtract_matrix(const matrix *a, const matrix *b) {
    if (a->col != b->col || a->row != b->row) {
        return NULL;
    }
    matrix *c = new_matrix(a->row, a->col);
    if (c == NULL) {
        return NULL;
    }
    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        c->value[i] = a->value[i] - b->value[i];
    }
    return c;
}

matrix* hadamard_matrix(const matrix *a, const matrix *b) {   //element wise matrix multiply
    if (a->col != b->col || a->row != b->row) {
        return NULL;
    }
    matrix *c = new_matrix(a->row, a->col);
    if (c == NULL) {
        return NULL;
    }
    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        c->value[i] = a->value[i] * b->value[i];
    }
    return c;
}

// scaler operations
matrix* scalar_multiply(matrix *a, const float b) {
    matrix* new = new_matrix(a->row,a->col);
    if(new == NULL){
        return NULL;
    }
    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        new->value[i] = a->value[i] * b;
    }
    return new;
}

matrix* scalar_add(matrix *a, const float b) {
    matrix* new = new_matrix(a->row,a->col);
    if(new == NULL){
        return NULL;
    }
    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        new->value[i] = a->value[i] + b;
    }
    return new;
}

matrix* multiply_matrix(const matrix *a, const matrix *b) {

    if (a->col != b->row) {
        return NULL;
    }
    matrix *c = new_matrix(a->row, b->col);
    if (c == NULL) {
        return NULL;
    }
    int row1 = a->row;
    int col1 = a->col;
    int row2 = b->row;
    int col2 = b->col;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            float sum = 0;
            for (int k = 0; k < col1; ++k) {
                sum += (a->value[i * col1 + k]) * (b->value[k * col2 + j]);
            }
            c->value[i * col2 + j] = sum;
        }
    }
    return c;
}

matrix* transpose_matrix(matrix *a) {
    int row1 = a->row;
    int col1 = a->col;
    matrix *b = new_matrix(col1, row1);
    if (b == NULL) {
        return NULL;
    }
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            b->value[j * (row1) + i] = a->value[i * (col1) + j];
        }
    }
    return b;
}

float dot_product(const matrix* a, const matrix* b){

    assert(a->col == b->col &&  a->row == b->row);  //if any of there (condition) is false than it will show error
    assert(a->col == 1 || a->row == 1);
    assert(b->col == 1 || b->row == 1);

    int temp = b->col * b->row;
    float sum = 0;
    for(int i = 0; i < temp;++i){
        sum += a->value[i] * b->value[i];
    }
    return sum;


}

matrix* apply_function(matrix* a,float (*f)(float)){ // here we will accept a function pointer and call it f and f should return float and take one float arg
    int count = a->col*a->row;

    matrix* b = new_matrix(a->row,a->col);
    if(b == NULL){
        return NULL;
    }

    for(int i = 0; i < count; ++i){
        b->value[i] = f(a->value[i]); 
    }
    return b;
}



//LINEAR ALGEBRA FEATURES


matrix* minor_matrix(matrix* a,int i,int j){

    int row = a->row;
    int col = a->col;
    assert(row == col);

    matrix* minor = new_matrix(row-1,col-1);
    if(minor == NULL){
        return NULL;
    }

    int append_count = 0;
    for(int l = 0; l < row;++l){
        if(l == i){
            continue;
        }
        for(int k = 0; k < col;++k){
            if(k==j){
                continue;
            }
            minor->value[append_count] = a->value[l*col+k] ;
            ++append_count;
        }
    }
    return minor;
            
}

static float det(float* mtr,int n){

    if(n == 1){
        return mtr[0];
    }

    float sum = 0;
    int sign = 1;
    for(int i = 0; i < n;++i){
        float* small = malloc(sizeof(float)*(n-1)*(n-1));
        if(small == NULL){
            fprintf(stderr, "malloc failed in derterminant_metrix\n");   //fprintf A function used to print formatted text to any file stream, not only the console. //stdrr means error consol and( stdout means normal printf consol)
            exit(1);
        }
        int append_count = 0;
        for(int j = 1; j < n;++j){
            for(int k = 0; k < n;++k){
                if(k==i){
                    continue;
                }
                small[append_count] = mtr[j*n+k] ;
                ++append_count;
            }
        }

        sum += (sign)*mtr[i]*det(small,n-1);
        free(small);
        sign *= -1;
    }
    return sum;
}

float determinant_matirix(matrix* a){

    int row = a->row;
    int col = a->col;
    assert(row == col);

    return det(a->value,row);

}

matrix* cofactor_matrix(matrix* a){
    int row = a->row;
    int col = a->col;
    assert(row == col);

    matrix* new = new_matrix(a->row,a->col);
    if(new == NULL){
        return NULL;
    }

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){

            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            matrix* minor = minor_matrix(a,i,j);
            new->value[i*col+j]= sign*determinant_matirix(minor);
            free_matrix(minor);
        }
    }

    return new;

}

matrix* adjoint_metrix(matrix* a){

    matrix* cofact = cofactor_matrix(a);
    matrix* adj = transpose_matrix(cofact);
    free_matrix(cofact);   //memory leak
    return adj;
}

matrix* inverse_matrix(matrix* a){

    float determinant= determinant_matirix(a);
    assert(determinant != 0);

    matrix* adj = adjoint_metrix(a);
    matrix* invr = scalar_multiply(adj,1/determinant);
    free_matrix(adj);
    return invr;

}

//NEURAL NETWORK–RELATED TOOLS

float relu_fn(float x) {
    return x > 0 ? x : 0;
}
float sigmoid_fn(float x) {
    return 1.0f / (1.0f + expf(-x));
}
float tanh_fn(float x) {
    return tanh(x);    //its in math.h tanh is called hyperbolic tangent
}
matrix* softmax(matrix* a){
    
    int row = a->row;
    int col = a->col;
    if (col == 0) return NULL;
    matrix* soft = new_matrix(row,col);
    if(soft == NULL){

        return NULL;
    }
    for(int i = 0; i < row;++i){
        float sum = 0;
        int index_base = i*col;
        float max_row = a->value[index_base];
        for(int j = 0;j < col; ++j){
            int index = index_base + j;
            if (a->value[index] > max_row ){
                max_row = a->value[index];
            }
        }
        //here we are substactin max value of that row (vector) to pervent it from overflowing because e^100 can go neer infinity
        for(int j = 0;j < col; ++j){

            int index = index_base + j;
            soft->value[index] = expf(a->value[index] - max_row);
            sum += soft->value[index];
        }
        for(int j = 0;j < col;++j){

            int index = index_base + j;
            soft->value[index] /= sum; 
        }
    }
    return soft;

}

int main(void){

    matrix* i = new_random_matrix(100,100,1,20);
    matrix* j = transpose_matrix(i);
    free_matrix(i);
    print_matrix(j);
    free_matrix(j);
}
