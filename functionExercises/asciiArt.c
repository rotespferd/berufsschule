// ASCII-Art
// Author: Marian Sievers
// 01.03.2013 v0.2

#include <stdio.h>

void printZeile(int blanks, int stars) {
    // print blanks
    for (int i = 0; i < blanks; ++i) {
        printf(" ");
    }

    // print stars
    for (int i = 0; i < stars; ++i) {
        printf("*");
    }

    // print newline
    printf("\n");
}

int main() {
    // decl. variables
    int n;
    int starcounter;

    // init startcount with 1 for first row
    starcounter = 1;
    
    // get the user input for n
    printf("Please insert n: ");
    scanf("%i", &n);

    // print upper part + middle row
    for (int i = 1; i <= n; ++i) {
        printZeile(n-i, starcounter);
        starcounter += 2;
    }

    // lower starcount to be ready for first line of lower part
    starcounter -= 2;
    
    // print lower part
    for (int i = (n-1); i > 0; --i) {
        starcounter -= 2;
        printZeile((n-i), starcounter);
    }

    return 0;
}