#include <stdio.h>

typedef struct {
    int type; // 0 for int, 1 for float
    union {
        int iVal;
        float fVal;
    } value;
} Variant;

int main(){

    Variant a;
    a.type = 1;
    a.value.fVal = 3.14;
    printf("%g ",a.value.fVal);

}   