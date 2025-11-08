#include <stdio.h>

int main(void){
    
    float a;
    int celing,floor;
    printf("Enter a value: ");
    scanf("%f",&a);

    floor = (int) a;
    if (a < 0 && (float)floor != a){   //if a is -ve & a is not perfact than we do -1 
        floor -= 1;
    }
    celing = floor;

    if((float)floor != a){             //as long as a is not perfact celing = floor + 1 (obv)
        celing += 1;
    }
    printf("floor : %d\nceiling :%d",floor,celing);
}