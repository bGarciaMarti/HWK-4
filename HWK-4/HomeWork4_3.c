//						HomeWork4_3.c
//
//	By: Bren Garcìa Martì
//	Date: 15 Feb 2021
//	Problem Statement:
//
//	Problem Statement: Write  a  program  that  prompts  the  user  to  enter  an  symbol.
//							Then prompt the user to give a size, which is the length and the width
//							of a box made of that symbol.
//							Use the variables fillCharacter and side
//
//				   /////// Algorithm ///////
// preprocessor header file
//
// main function
//
//  messages for what program does, input, and how it exits
// variables for demension sides and the character
//
//  print prompt for special character
//  scan for character variable
//  print prompt for number of demensions
//  scan for number input
//
//  for loop to count up from 1 to the demensions number input (width), 
//          print the special character
//      for loop that counds from 1 to demensions number input (length, verticle)
//          print the special character
//
// end main
/////////////////////////////////////////
#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
    puts("A program to print a square made of special characters by");
    puts("taking input for the special character and demensions of the squre.");
    puts("The program terminates once it's run.");

    int side = 5;
    char fillCharacter = '#';

    printf_s("Enter the special character you would like printed:\n");
    scanf("%c",&fillCharacter);
    printf_s("Enter the number for the demensions:\n");
    scanf("%d", &side);

    int i = 0;
    int j = 0;
    for (i = 1; i <= side; i++)
    {
        for (j = 1; j <= side; j++)
        {
            printf_s("%c", fillCharacter);
        }
        printf_s("\n");
    }
    return 0;
}