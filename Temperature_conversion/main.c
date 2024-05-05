#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp = 0;
    char temp_type = '\0';
    printf("Please enter temperature in form of (temperature number temp_type) ( for example 15 C or 15 F) \n");
    scanf("%f %c" , &temp , &temp_type);
    if('C' == temp_type)
    {
        printf("Temp in Celsius = %0.2f \n" , temp);
        printf("Temp in Fahrenheit = %0.2f \n" , (((9.0 / 5) * temp) + 32 ));
    }
    else if('F' == temp_type)
    {
        printf("Temp in Fahrenheit = %0.2f \n" , temp);
        printf("Temp in Celsius = %0.2f \n" , ((temp - 32) * (5.0 / 9) ));
    }
    else
    {
        printf("please enter temp in correct form \n");

    }
    return 0;
}
