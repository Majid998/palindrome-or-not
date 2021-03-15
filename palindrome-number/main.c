/*
Program  : to find whether the number is a palindrome or not
Author   : Majid Mujahid Hussain
Date     : 4th March 2021
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //palindrome is a number which is exactly same front and reverse
    //e.g. 16461 the reverse will also be, 16461
    long int number, originalNumber, reverseNumber, sum = 0, remainder;
    printf("Hello world!\n");

    //taking the user input
    printf("Please enter the number: ");
    scanf("%ld", &number);

    //saving the user input because we are going to change the number.
    originalNumber = number;

    while (number != 0)
    {
        remainder = number % 10;
        printf("\nRemainder is %d\n", remainder);
        reverseNumber = (reverseNumber * 10) + remainder;
        printf("Reversed Number is %d\n", reverseNumber);
        number = number / 10;
        printf("\nThe new number is %d\n", number);
       }

    if (reverseNumber == originalNumber)
    {
        printf("The user-entered number is a PALINDROME number.\n");
        printf("Since Reversed Number %d is equal to User- entered number %d\n", reverseNumber, originalNumber);

    }
    else
    {
     printf("The user-number is Not a Palindrome number. ");
     printf("Since Reversed Number %d is NOT equal to User- entered number %d\n", reverseNumber, originalNumber);

    }

    return 0;
}
