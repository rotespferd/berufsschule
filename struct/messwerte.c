// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>
#include "lib/handleValue.h"

int main() {
    FILE *file;
    int numberOfValues;
    file = fopen("values", "r");

    int tmpYear, tmpMonth, tmpDay, tmpHour, tmpMinute;
    float tmpValue;

    char userInput;

    int userInputYear, userInputMonth, userInputDay;
    int userInputHour;

    // get the count of all values
    fscanf(file, "%i\n", &numberOfValues);

    // init array of values
    measured_data data[numberOfValues];

    // get values from file
    for (int i = 0; i < numberOfValues; ++i) {
        fscanf(file, "%i-%i-%i %i:%i %f\n", &tmpYear, &tmpMonth, &tmpDay, &tmpHour, &tmpMinute, &tmpValue);
        
        data[i] = parseRow(tmpYear, tmpMonth, tmpDay, tmpHour, tmpMinute, tmpValue);
    }

    fclose(file);


    // ----------------------------
    // handle userinput
    // ----------------------------
    printf("What do you want?\n[d] values of a day\n[h] values of an hour\n");
    scanf("%c", &userInput);

    switch(userInput) {
        case 'h':
            printf("Please insert an hour: ");
            scanf("%i", &userInputHour);
            if (userInputHour > 24 || userInputHour < 0) {
                printf("Hour %i is out of range\n", userInputHour);
            } else {
                for (int i = 0; i < numberOfValues; ++i) {
                    if(data[i].date.hour == userInputHour) printf("%f\n", data[i].value);
                }
            }
            break;
        case 'd':
            printf("Please insert a date (yyyy-mm-dd): ");
            scanf("%i-%i-%i", &userInputYear, &userInputMonth, &userInputDay);

            date dateToTest;
            dateToTest.year = userInputYear;
            dateToTest.month = userInputMonth;
            dateToTest.day = userInputDay;

            for (int i = 0; i < numberOfValues; ++i) {
                if(isEqualDate(data[i].date, dateToTest) == 1) printf("%f\n", data[i].value);
            }

            break;
    }

    return 0;
}