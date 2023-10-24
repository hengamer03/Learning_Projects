#include <stdio.h>

int main(void) {
    printf("Write the temprature in Celcius that you want to onvert: ");

    float tempratureC;
    scanf("%f", &tempratureC);

    float tempratureF = (tempratureC * 9.0 / 5.0) + 32.0;

    printf("Your temprature would be %.2f F. \n", tempratureF);

    return 0;

}