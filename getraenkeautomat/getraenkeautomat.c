//
//  main.c
//  Berufsschule
//
//  Created by Marian Sievers on 25.01.13.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // declare all variables
    float priceCocoa, priceCoffee, neededValue, valueUserInput, coinInput;
    char drinkChoice;
    int withMilk;

    // init prices of drinks
    priceCocoa = 0.8;
    priceCoffee = 1.0;

    // init other values
    valueUserInput = 0.0;
    neededValue = 0.0;

    for (int i = 0; i < 10; ++i) {
        // get user drink choice
        do {
            printf("Please press A for coffee or B for cocoa\n");
            scanf("%s",&drinkChoice);
            //printf("%c", drinkChoice);
        } while (drinkChoice != 'A' && drinkChoice != 'B');

        // which drink was choosen? is milk needed?
        switch (drinkChoice) {
            case 'A':
                neededValue = priceCoffee;
                withMilk = 1;
                break;
            case 'B':
                neededValue = priceCocoa;
                withMilk = 0;
                break;

            default:
                break;
        }

        // get money from user until neededValues is reached
        do {
            printf("Please insert %f Euro!\n", neededValue - valueUserInput);
            scanf("%f", &coinInput);
            valueUserInput += coinInput;

        } while (valueUserInput < neededValue);

        // when milk is needed ask user for type of milk
        if (withMilk == 1) {
            printf("Press A for normal milk, B for sojamilk, C for lactose-free milk or X for no milk.\n");
            scanf("%s",&drinkChoice);
            switch (drinkChoice) {
                case 'A':
                    printf("You choose normal milk\n");
                    break;
                case 'B':
                    printf("You choose sojamilk\n");
                    break;
                case 'C':
                    printf("You choose lactose-free milk\n");
                    break;
                default:
                    printf("You choose no milk\n");
                    break;
            }
        }

        printf("Your drink is in production\n");

        // return loose money
        if (valueUserInput > neededValue) {
            printf("Your return is %f\n", (valueUserInput-neededValue));
        }

        // reset values
        drinkChoice = 'x';
        coinInput = 0;
        valueUserInput = 0;
    }

    printf("Please call the service!\n");
    printf("Out of order!\n");

    return 0;
}

