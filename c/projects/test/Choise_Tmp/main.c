#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char unit;
    int fahrenheit = 32;
    float startTemp;
    float sluttTemp;

    printf("Skal du ha \n(F) celsius til fahrenheit \n(C) fahrenheit til celsius\n");
    scanf("%c", &unit);

    unit = toupper(unit);

    printf("%c\n", unit);

    if (unit == 'C')
    {
        printf("\nSkriv inn temperaturen i fahrenheit:\n");
        scanf("%f", &startTemp);
        sluttTemp = (startTemp - 32) * 5 / 9;
        printf("\nTemperaturen er %.1f celsius\n", sluttTemp);
    }
    else if (unit == 'F')
    {
        printf("\nSkriv inn temperaturen i celsius:\n");
        scanf("%f", &startTemp);
        sluttTemp = (startTemp * 9 / 5) + 32;
        printf("\nTemperaturen er %.1f fahrenheit\n", sluttTemp);
    }
    else
    {
        printf("\nDu skreiv inn en feil input.");
    }
    
    return 0;
}