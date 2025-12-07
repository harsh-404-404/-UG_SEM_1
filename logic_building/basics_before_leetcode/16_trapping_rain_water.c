// Trapping Rain Water
// Goal: Compute trapped water.
// Hint: water[i] = min(max_left[i], max_right[i]) - arr[i].
// Input: [3, 0, 0, 2, 0, 4] -> Output: 10.

#include <stdio.h>

int min(int a, int b){

    return (a < b) ? a : b;
}

int main(void){

    int arr[] = {3,0,0,2,0,4};
    int count = sizeof(arr)/sizeof(arr[0]);

    int left[count];
    int right[count];

    int max = 0;
    for(int i = 0; i < count; ++i){
        if(arr[i] > max){
            max = arr[i];
        }
        left[i] = max;
    }

    max = 0;
    for(int i = count-1; i>= 0; --i){
        if(arr[i] > max){
            max = arr[i];
        }
        right[i] = max;
    }

    int trapped_water = 0;
    for(int i = 0; i < count; ++i){
        trapped_water += min(right[i],left[i]) - arr[i];
    }
    printf("%d",trapped_water);

}