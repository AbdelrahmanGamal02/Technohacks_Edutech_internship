#include <stdio.h>
#include <stdlib.h>

void binary_converter(unsigned int decimal_number);
void Octal_converter(unsigned int decimal_number);
void Hexadecimal_converter(unsigned int decimal_number);

int main()
{
    unsigned int number = 0;
    int choice = 0;
    printf("Please Enter decimal number : \n");
    scanf("%i" , &number);

    printf("Please enter the number of operation you want to be done : \n 1) Convert to Binary number \n 2) Convert to Octal number \n 3) Convert to Hexadecimal number \n ");
    scanf("%i" , &choice);
    switch(choice)
    {
    case 1:
        {
            binary_converter(number);
            break;
        }
    case 2:
        {
            Octal_converter(number);
            break;
        }
    case 3:
        {
            Hexadecimal_converter(number);
            break;
        }

    }
    return 0;
}

void binary_converter(unsigned int decimal_number)
{
    int remainder, binary = 0, i = 1;

  // Handle negative numbers (optional)
  if (decimal_number < 0) {
    printf("Error: Cannot convert negative numbers.\n");

  }else{

  while (decimal_number != 0) {
    remainder = decimal_number % 2;
    binary += remainder * i;
    decimal_number /= 2;
    i *= 10; // Move the decimal place of the binary number
  }
}
  printf("Binary equivalent: %d\n", binary);

}

void Octal_converter(unsigned int decimal_number)
{
    int remainder, binary = 0, i = 1;

  // Handle negative numbers (optional)
  if (decimal_number < 0) {
    printf("Error: Cannot convert negative numbers.\n");

  }else{

  while (decimal_number != 0) {
    remainder = decimal_number % 8;
    binary += remainder * i;
    decimal_number /= 8;
    i *= 10; // Move the decimal place of the binary number
  }
}
  printf("Octal equivalent: %d\n", binary);
}

void Hexadecimal_converter(unsigned int decimal_number)
{
  int remainder;
  char hexadecimal[100];
  int i = 0;

  // Handle negative numbers (optional)
  if (decimal_number < 0) {
    printf("Error: Cannot convert negative numbers.\n");
  }else
  {
  while (decimal_number != 0) {
    remainder = decimal_number % 16;
    if (remainder < 10) {
      hexadecimal[i++] = remainder + '0';
    } else {
      hexadecimal[i++] = remainder + 55; // Convert A-F for hexadecimal digits
    }
    decimal_number /= 16;
  }

  printf("Hexadecimal equivalent: ");
  // Print in reverse order (most significant digit last)
  for (int j = i - 1; j >= 0; j--) {
    printf("%c", hexadecimal[j]);
  }
  printf("\n");
  }
}
