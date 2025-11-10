#include <stdio.h>

int main(void)
{
    float h,min = 0;
    printf("Enter the hight of pole: ");
    scanf("%f",&h);


    int temp = h - ((int)h % 3) - 3;        //select 2nd previous nearest multiple of 3 from h via [ h - rem(h,3) -3 ] 

    if (h <= 5){
        temp = 0;
    }

    min = (temp/3)*2;                           //time to reach temp distance can be directly be calculated via 3ft/2min speed
    min += ((h - temp) / 5);                    //we obsesrved that after hight which is multiple of three(here temp) monkey climbes with speed of 5ft/min
    printf("%gmin",min);

//    invariant:- monkey will reach new hight only starting from hights which are multiple of three and he will clime at he rate of 5ft/s

//                                                    0 --> 0     +5ft/min
//                                                    1 --> 5                 
//                                                    2 --> 3     +5ft/min
//                                                    3 --> 8
//                                                    4 --> 6     +5ft/min
//                                                    5 --> 11
//                                                    6 --> 9     +5ft/min
//                                                    7 --> 14
//                                                    8 --> 12    +5ft/min
//                                                    9 --> 17
//                                                    10 --> 15   +5ft/min
//
//
//                                                    E.x monkey will reach hight of 13 (nearest multiple of 3 is 12) first time from 9 
//                                                    E.x monkey will reach hight of 11 (nearest multiple of 3 is 9)first time from 6
//                                                    E.x monkey will reach hight of 16 (nearest multiple of 3 is 15)first time after 12
                                                    
}
























