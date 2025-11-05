#include <stdio.h>

int main(void){

    int year = 2004;
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("given year is leap year");
    }
    else{
        printf("given year is not a leap year");
    }
}

// The length of a year is (more or less) 365.242196 days. So we have to subtract, more or less, a quarter of a day to make it fit :
// 365.242196 - 0.25 = 364.992196 (by adding 1 day in 4 years) : but oops, now it's too small!! lets add a hundreth of a day (by not adding that day once in a hundred year :-))
// 364.992196 + 0,01 = 365.002196 (oops, a bit too big, let's add that day anyway one time in about 400 years)
// 365.002196 - 1/400 = 364.999696
// Almost there now, just play with leapseconds now and then, and you're set.
// (Note : the reason no more corrections are applied after this step is because a year also CHANGES IN LENGTH!!, that's why leapseconds are the most flexible solution, see for examlple here)
// That's why i guess