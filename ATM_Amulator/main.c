#include <stdio.h>
#include <stdlib.h>

unsigned int balance = 0;

void Deposit_Function(unsigned int number);
void Withdraw_Function(unsigned int number);
void Check_Balance();

int main() {
    int choice1 = 0;
    int choice2 = 0;
    int number = 0;
    printf("                Welcome \n");
    label1:
    printf("Please Enter number of operation you want : \n 1) Deposit \n 2) Withdraw \n 3) check your balance \n");
    scanf("%i" , &choice1);
    switch (choice1) {
        case 1:
        {
            printf("Please Enter number to be Deposit : \n");
            scanf("%i" , &number);
            Deposit_Function(number);
            printf("Do you Want Another Operation : \n 1) Yes \n 2) No");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label1;
            }else { /* NoThing */ }
            break;
        }
        case 2:
        {
            printf("Please Enter number to be Withdraw : \n");
            scanf("%i" , &number);
            Withdraw_Function(number);
            printf("Do you Want Another Operation : \n 1) Yes \n 2) No");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label1;
            }else { /* NoThing */ }
            break;
        }
        case 3:
        {
            Check_Balance();
            printf("Do you Want Another Operation : \n 1) Yes \n 2) No \n");
            scanf("%i" , &choice2);
            if (1 == choice2)
            {
                goto label1;
            }else { /* NoThing */ }
            break;
        }

    }

    return 0;
}
void Deposit_Function(unsigned int number)
{
    balance += number;
    printf("Deposit Function is done successfully \n");
}

void Withdraw_Function(unsigned int number)
{
    if(number > balance)
    {
        printf(" The operation can't be done \n Number is bigger than Balance \n");
    }else
    {
        balance -= number;
        printf("Withdraw Function is done successfully \n");
    }
}

void Check_Balance()
{
    printf("Your Balance is %d$ \n" , balance);
}
