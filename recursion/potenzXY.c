// recursion power
// Author: Marian Sievers
// 14.03.2013 v0.x

#include <stdio.h>

long power(int k, int n);

long easyPower(int k, int n);

int counter;

int main() {
    int k, n;
    long result;
    counter = 0;

    printf("Please insert k: ");
    scanf("%i", &k);

    printf("Please insert n: ");
    scanf("%i", &n);

    result = power(k, n);

    if (result < 0) {
        printf("Type overflow!\n");
    } else {
        printf("The result of k^n is %li\n", result);
        printf("The counter is %i\n", counter);
    }

    counter = 0;

    result = easyPower(k, n);

    if (result < 0) {
        printf("Type overflow!\n");
    } else {
        printf("The result of k^n with easyPower is %li\n", result);
        printf("The counter is %i\n", counter);
    }

    return 0;
}

// Aufgabe 2
long easyPower(int k, int n) {
    counter++;
    if (n == 0) {
        return 1;
    } else {
        return k * easyPower(k, n-1);
    }
}

// Aufgabe 3
long power(int k, int n){
    counter++;
    if(n == 0){
        return 1;
    }

    if (n == 1) {
        return k;
    }

    if(n % 2 == 0) {
        returnpower(k, n/2) * power(k, n/2);
    } else {
        return k * power(k, (n-1)/2) * power(k, (n-1)/2);
    }
}