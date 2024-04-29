#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int counter = 0;
    int counter2 = 0;

    char null_p = 'a';
    char str1[1000];

    printf("Please Enter string : ");
    scanf("%s" , str1);

    /* to find the size of string entered by user */
    while(null_p != '\0')
    {
        null_p = str1[counter];
        counter++;
    }
    /*********************************************/

    char str2[1000] = {'\0'};

    for (int i = counter - 2 ; i >= 0 ; --i) {
        str2[counter2] = str1[i];
        counter2++;

    }

    int result = strcmp(str1 , str2);

    if(0 == result)
    {
        printf("String Entered is a Palindrome\n");
    }
    else
    {
        printf("String Entered is not a Palindrome\n");
    }

    return 0;
}
