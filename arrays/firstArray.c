// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>

int main() {
    float input[10];
    float sum = 0;

    for (int i = 0; i < 10; ++i) {
        printf("Please insert a value number %i: ", i+1);
        scanf("%f", &(input[i]));
    }

    for (int i = 0; i < 10; ++i) {
        sum += input[i];
    }

    printf("The sum is %f\n", sum);

    return 0;
}
