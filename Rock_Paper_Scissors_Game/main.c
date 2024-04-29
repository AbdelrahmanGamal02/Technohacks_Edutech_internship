#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "string.h"

int main() {

    unsigned char play[][10] = {"Rock" , "Paper" , "Scissors"};
    unsigned char user_play[10];

    int choice2 = 0;

    printf("                                Welcome \n ");

    label:
    /* this is use to make computer use different play every time (make computer interactive with player)*/
    srand(time(NULL));
    int number = rand() % 3;
    /********************************************************************************************/

    printf("Let's play Rock - Paper - Scissors \n");

    printf("Please Enter your Play Rock or Paper or Scissors (case sensitive) :\n");
    scanf("%s" , user_play);

    int result = strcmp( play[number] , user_play);
    printf("Computer choose %s \n" , play[number]);
    if (0 == result)
    {

        printf("we Draw  \n");
        printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
        scanf("%i" , &choice2);
        if (1 == choice2)
        {
            goto label;
        }else { goto finish; }

    }else
    {
        int res1 = strcmp(play[number] , "Rock");
        int res2 = strcmp(user_play , "Paper");

        if(res1 == 0 && 0 == res2)
        {
            printf("You win congratulations \n Let's play again \n");
            printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label;
            }else { goto finish; }
        }

        res1 = strcmp(play[number] , "Rock");
        res2 = strcmp(user_play , "Scissors");

        if(res1 == 0 && 0 == res2)
        {
            printf("Computer win congratulations to me :) \n Let's play again \n");
            printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label;
            }else { goto finish; }
        }

        res1 = strcmp(play[number] , "Paper");
        res2 = strcmp(user_play , "Rock");

        if(res1 == 0 && 0 == res2)
        {
            printf("Computer win congratulations to me :) \n Let's play again \n");
            printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label;
            }else { goto finish; }
        }

        res1 = strcmp(play[number] , "Paper");
        res2 = strcmp(user_play , "Scissors");

        if(res1 == 0 && 0 == res2)
        {
            printf("You win congratulations \n Let's play again\n ");
            printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label;
            }else { goto finish; }
        }

        res1 = strcmp(play[number] , "Scissors");
        res2 = strcmp(user_play , "Rock");

        if(res1 == 0 && 0 == res2)
        {
            printf("You win congratulations \n Let's play again \n");
            printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label;
            }else { goto finish; }
        }

        res1 = strcmp(play[number] , "Scissors");
        res2 = strcmp(user_play , "Paper");

        if(res1 == 0 && 0 == res2)
        {
            printf("Computer win congratulations to me :) \n Let's play again \n");
            printf("Do you Want to play again : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label;
            }else { goto finish; }
        }

        printf("Please Enter Correct Play :) \n");
        goto label;

    }

    finish:
    return 0;
}
