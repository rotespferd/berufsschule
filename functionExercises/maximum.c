// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>

int maximum(int numberA, int numberB) {
    if (numberA > numberB)
    {
        return numberA;
    } else {
        return numberB;
    }
}

int main() {
    printf("The biggest number is %i\n", maximum(12, 42));
    return 0;
}
