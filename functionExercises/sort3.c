// sorts 3 values in asc order
// Author: Marian Sievers
// 27.02.2013 v0.1

#include <stdio.h>

/*
* twoValueSwap swaps two values
* params:
*   valueA (pointer, float)
*   valueB (pointer, float)
*/
void twoValueSwap(float *valueA, float *valueB) {
    float temp = *valueA;
    *valueA = *valueB;
    *valueB = temp;
}

/*
* sort3 sorts three values in ascending order
* params:
*   valueA (pointer, float)
*   valueB (pointer, float)
*   valueC (pointer, float)
*/
void sort3(float *valueA, float *valueB, float *valueC) {
    if (*valueA > *valueB) {
        twoValueSwap(valueA, valueB);
    }
    if (*valueB > *valueC) {
        twoValueSwap(valueC, valueB);
    }
    if (*valueA > *valueB) {
        twoValueSwap(valueA, valueB);
    }
}

int main() {
    // init the three values
    float a, b, c;
    a = 42.124;
    b = 100.23;
    c = 3.141;

    // print values in old order
    printf("A:%.3f, B:%.3f, C:%.3f\n", a, b, c);

    // call function to sort three values
    sort3(&a, &b, &c);

    // print values in new, sorted order
    printf("A:%.3f, B:%.3f, C:%.3f\n", a, b, c);

    return 0;
}
