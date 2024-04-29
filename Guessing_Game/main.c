#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    /* To generate random value every time */
    srand(time(NULL));
    int Guess_number = rand() % 100;

    int number = 0;
    printf("Welcome Let's Play Guessing Game  \n");
    while(1)
    {

        printf("Guess The number :");
        scanf("%i",&number);

        if(Guess_number == number)
        {
            break;
        }

        if(number < Guess_number)
        {
            printf("The number you want to Guess is bigger Than number you entered\n");

            if(((Guess_number - number) < 10) && ((Guess_number - number) > 1))
            {
                printf("you are so close just a few steps up \n");
            }

            if(1 == (Guess_number - number))
            {
                printf("You need just one step up to get the number \n");
            }

        }else
        {

            printf("The number you want to Guess is lower Than number you entered\n");

            if(((number - Guess_number) < 10) && ((number - Guess_number) > 1))
            {
                printf("you are so close just a few steps down \n");
            }

            if(1 == (number - Guess_number))
            {
                printf("You need just one step down to get the number \n");
            }

        }
    }

    printf("Congratulations You Guessed the number correctly\n");
    printf("The number was %i \n", Guess_number );

    return 0;
}
