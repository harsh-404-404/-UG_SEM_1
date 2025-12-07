// Union of Two Arrays
// Goal: Union of two sorted arrays.
// Constraint: O(N+M). Handle duplicates.
// Input: [1, 3], [2, 3] -> Output: [1, 2, 3]


#include <stdio.h>

int main(void)
{

    int a[] = {1,3};
    int b[] = {2, 3};

    int a_count = sizeof(a) / sizeof(a[0]);
    int b_count = sizeof(b) / sizeof(b[0]);

    int c[a_count + b_count];

    int i = 0, j = 0, k = 0;

    // Merge with duplicate removal
    while (i < a_count && j < b_count)
    {
        if (a[i] < b[j])
        {
            if (k == 0 || c[k - 1] != a[i])
                c[k++] = a[i];
            i++;
        }
        else if (a[i] > b[j])
        {
            if (k == 0 || c[k - 1] != b[j])
                c[k++] = b[j];
            j++;
        }
        else
        { // a[i] == b[j]
            if (k == 0 || c[k - 1] != a[i])
                c[k++] = a[i];
            i++;
            j++;
        }
    }
    while (i < a_count){
        if (k == 0||c[k - 1] != a[i])
            c[k++] = a[i];
        i++;
    }
    while (j < b_count){
        if ( k == 0 ||c[k - 1] != b[j])
            c[k++] = b[j];
        j++;
    }

    for (int idx = 0; idx < k; ++idx) printf("%d ", c[idx]);
}