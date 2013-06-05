// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>
#include <string.h>

int main() {
    double values[50];
    char next;
    char no = 'n';

    for (int i = 0; i < 50; ++i) {
        printf("Please enter a value: ");
        scanf("%lf", &(values[i]));
        printf("Möchten Sie noch eine zahl eingeben?(yn): ");
        scanf("%s", &next);
        if (strcmp(&next, &no) == -1) {
            break;
        }
    }

    return 0;
}
