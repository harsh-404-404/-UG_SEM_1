#include <stdio.h>

int main(void)
{
    float h,min = 0;
    printf("Enter the hight of pole: ");
    scanf("%f",&h);


    int part1 = h - ((int)h % 3) - 3;        //select 2nd previous nearest multiple of 3 from h via [ h - rem(h,3) -3 ] 

    if (h <= 5){
        part1 = 0;
    }

    min = (part1/3)*2;                           //time to reach part1 distance can be directly be calculated via 3ft/2min speed
    min += ((h - part1) / 5);
    float sec = (min - (int)min)*60; 
    min = (int) min;                    //we obsesrved that after hight which is multiple of three(here part1) monkey climbes with speed of 5ft/min

    (sec != 0) ? printf("%g min %g sec",min,sec) : printf("%g min",min);  //%g removes unnecesory zeros from float E.x 2.00000 -> 2
}
//    invariant:- monkey will reach new hight only starting from hights which are multiple of three and he will climbe at he rate of 5ft/s

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
//
//                                                    E.x monkey will reach hight of 13 (nearest multiple of 3 is 12) first time from 9 
//                                                    E.x monkey will reach hight of 11 (nearest multiple of 3 is 9)first time from 6
//                                                    E.x monkey will reach hight of 16 (nearest multiple of 3 is 15)first time after 12
                                                    

























