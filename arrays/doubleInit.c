// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>

int main() {
    int array[5];

    for (int i = 0; i < 5; ++i) {
        array[i] = i*2;
        printf("Element %i: %i\n", i, array[i]);
    }

    return 0;
}
