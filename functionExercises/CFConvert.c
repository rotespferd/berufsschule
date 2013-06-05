// Addition of two celsius or fahrenheit values
// Author: Marian Sievers
// 08.03.2013 v0.8

#include <stdio.h>

float CConvertToF(float celius);
float FConvertToC(float fahrenheit);
float addition(float a, float b);

int main() {
    float valueA, valueB;
    char unit;

    float resultC, resultF, resultTemp;

    printf("Please insert value A: ");
    scanf("%f", &valueA);

    printf("Please insert value B: ");
    scanf("%f", &valueB);

    printf("C=Celius, F=Fahrenheit\n");
    printf("Please insert the unit: ");
    scanf("%s", &unit);

    resultTemp = addition(valueA, valueB);

    if (unit == 'F') {
        resultF = resultTemp;
        resultC = FConvertToC(resultTemp);
    } else {
        resultC = resultTemp;
        resultF = CConvertToF(resultTemp);
    }

    printf("The addition in Celsius is %.2f\n", resultC);
    printf("The addition in Fahrenheit is %.2f\n", resultF);

    return 0;
}

// addition of two values
float addition(float a, float b) {
    return a+b;
}

// converts Celsius to Fahrenheit
float CConvertToF(float celius) {
    return celius * 9 / 5 + 32;
}

// converts Fahrenheit to Celsius
float FConvertToC(float fahrenheit) {
    return (fahrenheit-32) * 5 / 9;
}