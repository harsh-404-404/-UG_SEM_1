#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <math.h>


#define ERROR_LOG(fmt, ...) fprintf(stderr, "[ERROR] %s:%d: " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)

#define CHECK_NULL_MATRIX(m, ret_val) if ((m) == NULL) { \
    ERROR_LOG("Argument '%s' is NULL in function %s", #m, __func__); \
    return ret_val; \
}

// index = (i * total_column + j)


typedef struct matrix
{
    int row;
    int col;
    float *value;
} matrix;



// ------------------ MEMORY MANAGEMENT ------------------

// Wrapper to ensure malloc never returns NULL
void* malloc_safe(size_t n) {
    void* p = malloc(n);
    if (p == NULL) {
        ERROR_LOG("Fatal: Out of memory! Failed to allocate %zu bytes.", n);
        exit(1); // Kill program immediately
    }
    return p;
}


//1.---------------- Create / Destroy----------------------
matrix* new_matrix(int a, int b) {
    matrix *new_matrix = malloc_safe(sizeof(matrix));

    new_matrix->row = a;
    new_matrix->col = b;
    new_matrix->value = malloc_safe(sizeof(float) * a * b);

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

    new->row = a;
    new->col = b;
    int count = a*b;

    for(int i = 0;i < count;++i){
        new->value[i] = ((float)rand()/(float)RAND_MAX)*max-min + min;
    }
    return new;

}



//2. Fill / Input / Output
void set_matrix(matrix *ptr, int a, int b, float value) {
    CHECK_NULL_MATRIX(ptr,);

    int col = ptr->col;
    int row = ptr->row;
    
    ptr->value[a * (col) + b] = value;
}

matrix* array_matrix(float *arr, int a, int b) {
    CHECK_NULL_MATRIX(arr,NULL);
    matrix *c = new_matrix(a, b);

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            c->value[i * (b) + j] = arr[i * (b) + j];
        }
    }
    return c;
}

void fill_matrix(matrix *ptr, float value) {
    CHECK_NULL_MATRIX(ptr,);
    int temp = (ptr->col) * (ptr->row);
    for (int i = 0; i < temp; ++i) {
        ptr->value[i] = value;
    }
}

void print_matrix(matrix *ptr) {
    CHECK_NULL_MATRIX(ptr,);
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
    CHECK_NULL_MATRIX(old,NULL);

    int count = (old->col) * (old->row);
    matrix *new = new_matrix(old->row, old->col);


    for (int i = 0; i < count; i++) {
        new->value[i] = old->value[i];
    }
    return new;
}
//reshape return 0 on success -1 on failure
int reshape_matrix(matrix *m, int new_rows, int new_cols) {
    CHECK_NULL_MATRIX(m,);
    if (new_rows * new_cols != (m->col) * (m->row)) {
        ERROR_LOG("Invalid matrix Dimension ! can not reshape %d x %d matrix into %d x %d",m->row,m->col,new_rows,new_cols);
        return -1;
    }
    m->row = new_rows;
    m->col = new_cols;
    return 0;
}



//B. MATRIX OPERATIONS (CORE FEATURES)


matrix* add_matrix(const matrix *a, const matrix *b) {
    CHECK_NULL_MATRIX(a,NULL);
    CHECK_NULL_MATRIX(b,NULL);

    if (a->col != b->col || a->row != b->row) {
        ERROR_LOG("Matrix dimensions didn't match!\n");
        return NULL;
    }

    matrix *c = new_matrix(a->row, a->col);

    for (int i = 0; i < (a->row) * (a->col); ++i) {
        c->value[i] = a->value[i] + b->value[i];
    }
    return c;
}

matrix* subtract_matrix(const matrix *a, const matrix *b) {
    CHECK_NULL_MATRIX(a,NULL);
    CHECK_NULL_MATRIX(b,NULL);


    if (a->col != b->col || a->row != b->row) {
        ERROR_LOG("Matrix dimensions didn't match!\n");
        return NULL;
    }
    matrix *c = new_matrix(a->row, a->col);

    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        c->value[i] = a->value[i] - b->value[i];
    }
    return c;
}

matrix* hadamard_matrix(const matrix *a, const matrix *b) {   //element wise matrix multiply
    CHECK_NULL_MATRIX(a,NULL);
    CHECK_NULL_MATRIX(b,NULL);

    if (a->col != b->col || a->row != b->row) {
        ERROR_LOG("Matrix dimensions didn't match!\n");
        return NULL;
    }
    matrix *c = new_matrix(a->row, a->col);

    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        c->value[i] = a->value[i] * b->value[i];
    }
    return c;
}

// scaler operations
matrix* scalar_multiply(matrix *a, const float b) {
    CHECK_NULL_MATRIX(a,NULL);

    matrix* new = new_matrix(a->row,a->col);

    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        new->value[i] = a->value[i] * b;
    }
    return new;
}

matrix* scalar_add(matrix *a, const float b) {
    CHECK_NULL_MATRIX(a,NULL);

    matrix* new = new_matrix(a->row,a->col);

    int count = (a->row) * (a->col);
    for (int i = 0; i < count; ++i) {
        new->value[i] = a->value[i] + b;
    }
    return new;
}
//smart implimentation  to solve Cache Misses.
matrix* multiply_matrix(const matrix *a, const matrix *b) {
    CHECK_NULL_MATRIX(a,NULL);
    CHECK_NULL_MATRIX(b,NULL);

    if (a->col != b->row) {
        ERROR_LOG("Matrix dimensions didn't match!\n");
        return NULL
        
    }
    matrix *c = new_matrix(a->row, b->col);
 
    fill_matrix(c,0);
    int row1 = a->row;
    int col1 = a->col;
    int row2 = b->row;
    int col2 = b->col;
    for (int i = 0; i < row1; ++i) {

        for (int j = 0; j < col1; ++j) {

            float r = a->value[i*col1+j];
            for (int k = 0; k < col2; ++k) {
                c->value[i*col2+k] += r * b->value[j*col2+k];
            }
            
        }
    }
    return c;
}

matrix* transpose_matrix(matrix *a) {
    CHECK_NULL_MATRIX(a,NULL);

    int row1 = a->row;
    int col1 = a->col;
    matrix *b = new_matrix(col1, row1);

    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            b->value[j * (row1) + i] = a->value[i * (col1) + j];
        }
    }
    return b;
}

float dot_product(const matrix* a, const matrix* b){
    CHECK_NULL_MATRIX(a,NAN);
    CHECK_NULL_MATRIX(b,NAN);

    int a_row = a->row;
    int b_row = b->row;
    int a_col = a->col;
    int b_col = b->col;


// 2. Check if 'a' is a 2D matrix (Error if BOTH dimensions > 1)
    if (a_row != 1 && a_col != 1) {
        ERROR_LOG("Dot product input 'a' is not a vector (Dimensions: %dx%d)", a_row, a_col);
        return NAN;
    }
    
    // 3. Check if 'b' is a 2D matrix
    if (b_row != 1 && b_col != 1) {
        ERROR_LOG("Dot product input 'b' is not a vector (Dimensions: %dx%d)", b_row, b_col);
        return NAN;
    }
    if(a_row != b_row || a_col != b_col){
        ERROR_LOG("vectors does not have same dimentions (%dx%d) vs (%dx%d)",a_row,a_col,b_row,b_col);
        return NAN;
    }

    int temp = b_col * b_row;
    float sum = 0;
    for(int i = 0; i < temp;++i){
        sum += a->value[i] * b->value[i];
    }
    return sum;


}

matrix* apply_function(matrix* a,float (*f)(float)){ // here we will accept a function pointer and call it f and f should return float and take one float arg
    CHECK_NULL_MATRIX(a,NULL);
    CHECK_NULL_MATRIX(f,NULL);
    int count = a->col*a->row;

    matrix* b = new_matrix(a->row,a->col);

    for(int i = 0; i < count; ++i){
        b->value[i] = f(a->value[i]); 
    }
    return b;
}



//LINEAR ALGEBRA FEATURES


matrix* minor_matrix(matrix* a,int i,int j){
    CHECK_NULL_MATRIX(a,NULL);
    
    int row = a->row;
    int col = a->col;
    
    if(row != col){
        ERROR_LOG("Minor matrices are only defined for squre metrix and given metrix has dimention: (%dx%d)",row,col);
        return NULL;
    }
    
    if(i > row-1 || i < 0 || j > col-1 || j < 0){
        ERROR_LOG("invalid indexes %d, %d",i,j);
        return NULL;
    }




    matrix* minor = new_matrix(row-1,col-1);

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




void swap_rows(matrix* m, int r1, int r2){
    CHECK_NULL_MATRIX(m,);
    
    int col = m->col;
    int row = m->row;

    if(r1 >= row-1 || r1 < 0 || r2 >= row-1 || r2 < 0){
        ERROR_LOG("invalid indexes %d, %d",r1,r2);
        return ;
    }

    if (r1 == r2) return;  

    size_t bytes = sizeof(float)*col;
    

    if(col < 10000){
        float temp[col];
        memcpy(temp, &(m->value[r1*col]), bytes);                  //copy r1 row to temp
        memcpy(&(m->value[r1*col]), &(m->value[r2*col]), bytes);    //copy r2 row to r1
        memcpy(&(m->value[r2*col]),temp, bytes);                    //copy temp to r2

        return;
    }

    float* temp = malloc_safe(bytes);
    

    memcpy(temp, &(m->value[r1*col]), bytes);                  //copy r1 row to temp
    memcpy(&(m->value[r1*col]), &(m->value[r2*col]), bytes);    //copy r2 row to r1
    memcpy(&(m->value[r2*col]),temp, bytes);
    free(temp);

    return;

}
void multiply_row(matrix* m, int r, float scalar) {
    CHECK_NULL_MATRIX(m,);
    int col = m->col;
    if(r >= m->row || r < 0){
        ERROR_LOG("invalid row indexes %d",r);
        return;       
    }

    float* row = &m->value[r*m->col];

    for (int i = 0; i < col; ++i) {
        row[i] *= scalar;
    }
}
void add_rows(matrix* m, int target_r, int source_r, float scale) { //add multiple of one row to another row

    CHECK_NULL_MATRIX(m,);
    int col = m->col;
    int row = m->row;
    if(source_r >= row || source_r < 0|| target_r >= row || target_r < 0){
        ERROR_LOG("invalid row index %d , %d",target_r,source_r);
        return;       
    }

    float* t = &m->value[target_r * col];
    float* s = &m->value[source_r * col];

    for (int i = 0; i < col; ++i) {
        t[i] += scale * s[i];
    }
}
float determinant_matrix(const matrix *m){
    CHECK_NULL_MATRIX(m,NAN);
    
//Gaussian Elimination
    int row = m->row;
    int col = m->col;

    if(row != col){
        ERROR_LOG("Determinants are only defined for squre metrix and given metrix has dimention: (%dx%d)",row,col);
        exit(1);
    }

    matrix* k = copy_matrix(m);
    
    int end_det = 1;
    for(int i = 0; i < row; ++i){

        
        float pivot = k->value[i*col+i];
        if(pivot == 0){
            int temp;
            for(temp = i+1; temp < row; ++temp){
                if(k->value[temp*col+i] != 0){
                    swap_rows(k,temp,i);
                    pivot = k->value[i*col+i];
                    end_det *= (-1);
                    break;
                }
            }
            if(temp == row){
                free_matrix(k);
                return 0;
            }
        }
        for(int j = i + 1; j < row; ++j){
            //arr[j][i];
            float entry = k->value[j*col+i];
            add_rows(k,j,i,(-1)*(entry/pivot));     //r3 - K*r1 

        }
    }
    float det = 1;
    for(int i = 0;i < row;++i){
        det *= k->value[i*col+i];
    }
    det *= end_det;
    free_matrix(k);
    return det;

}



matrix* cofactor_matrix(matrix* a){
    CHECK_NULL_MATRIX(a,NULL);

    int row = a->row;
    int col = a->col;
    if(row != col){
        ERROR_LOG("Cofactors are only defined for squre metrix and given metrix has dimention: (%dx%d)",row,col);
        exit(1);
    }

    matrix* new = new_matrix(a->row,a->col);

    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){

            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            matrix* minor = minor_matrix(a,i,j);
            new->value[i*col+j]= sign*determinant_matrix(minor);
            free_matrix(minor);
        }
    }

    return new;

}

matrix* adjoint_matrix(matrix* a){
    CHECK_NULL_MATRIX(a,NULL);

    matrix* cofact = cofactor_matrix(a);
    matrix* adj = transpose_matrix(cofact);
    free_matrix(cofact);   //memory leak
    return adj;
}

matrix* inverse_matrix(matrix* a){
    CHECK_NULL_MATRIX(a,NULL);

    if(a->row != a->col){
        ERROR_LOG("Inverse matrix is only defined for square matrix but given metrix has dimentin: (%dx%d)",a->row,a->col);
        return NULL;
    }

    float determinant= determinant_matrix(a);
    if(determinant == 0){
        ERROR_LOG("Inverse matrix is only defined for square matrix with non-zero determinant but for given matrix determinant = %d",0);
        return NULL;
    }

    matrix* adj = adjoint_matrix(a);
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

    float k[] ={45,-8,2,15,16,7,2,160,13};
    matrix* b = array_matrix(k,3,3);
    
    matrix* o = multiply_matrix(b,b);
    print_matrix(o);


    // matrix* c = new_random_matrix(10,10,-10,10);
    // printf("%g",determinant_matrix_2(c));
    // free_matrix(c);


}



