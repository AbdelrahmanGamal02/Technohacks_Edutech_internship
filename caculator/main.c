#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number1 = 0;
    float number2 = 0;
    int choice = 0;
    printf("Please Enter The first Number: ");
    scanf("%f" , &number1);
    printf("Please Enter The second Number: ");
    scanf("%f" , &number2);
    printf("Please enter the number of operation you want to be done : \n 1) Addition \n 2) Subtraction \n 3) Multiplication \n 4) Division \n");
    scanf("%i" , &choice);
    switch(choice)
    {
    case 1:
        {
            printf("The result is %0.2f " , (number1 + number2));
            break;
        }
    case 2:
        {
            printf("The result is %0.2f " , (number1 - number2));
            break;
        }
    case 3:
        {
            printf("The result is %0.2lf " , (number1 * number2));
            break;
        }
    case 4:
        {
            printf("The result is %0.2f " , (number1 / number2));
            break;
        }

    }
    return 0;
}
