#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int number;
    short int digit1, digit2, digit3, digit4, digit5;

    printf("Enter a number: ");
    scanf("%d", &number);

    digit1 = number / 10000;
    digit2 = number / 1000 % 10;
    digit3 = number / 100 % 10;
    digit4 = number / 10 % 10;
    digit5 = number % 10;

    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
    printf("%d   %d   %d   %d\n", digit2, digit3, digit4, digit5);
    printf("%d   %d   %d\n",digit3, digit4, digit5);
    printf("%d   %d\n", digit4, digit5);
    printf("%d", digit5);

    return 0;
}
