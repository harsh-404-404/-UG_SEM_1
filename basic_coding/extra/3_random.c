#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    srand(time(NULL));
    printf("%d\n",rand());

    printf("%f\n",(float)rand()/(float)RAND_MAX);

    //random number between 11-19
    printf("%d\n",rand() % (19-11) + 11);

//    [0 1] * x = [0 x] + y = [y x+y];
//    random float between x and y
    int x=11;
    int y=19;
    float random = ((float)rand()/(float)RAND_MAX)*(y-x) + x;

 

}