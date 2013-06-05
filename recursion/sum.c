// sum recursion
// Author: Marian Sievers
// 14.03.2013 v0.4

#include <stdio.h>

int sum(int n);

int main() {
    int result, n;

    printf("Please insert n: ");
    scanf("%i", &n);

    if (n < 0) {
        printf("%i ∉ N 😝\n", n);
    } else {
        result = sum(n);
        printf("The sum of n is %i 😍\n", result);
    }

    return 0;
}

int sum(int n) {
    if (n <= 1) {
        return 1;
    }
    return n + sum(n-1);
}