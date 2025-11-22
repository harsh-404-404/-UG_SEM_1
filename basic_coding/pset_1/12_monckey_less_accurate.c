#include <stdio.h>

int main(void)
{
    float h,min = 0;
    float part1,time1,part2,time2,sec;
    printf("Enter the hight of pole: ");
    scanf("%f",&h);

    part1 = ((int)(h/3) - 1);
    time1 = part1*2;
    part2 = (h - (part1*3)); 
    time2 = part2/5;
    min = time1 + time2;
    sec = (min - (int)min) * 60;

    (sec != 0) ? printf("%d min %g sec",(int)min,sec) : printf("%d min",min);  //%g removes unnecesory zeros from float E.x 2.00000 -> 2
}


