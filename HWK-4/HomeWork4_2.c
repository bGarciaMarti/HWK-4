//     
//						HomeWork4_2.c
//
//	By: Bren Garcìa Martì
//	Date: 15 Feb 2021
//	Problem Statement:
//
//	Problem Statement: Write  a  program  that  prompts  the  user  to  enter  an  integer  number  one-to-five  (numbers 
// represent the first five elements in the periodic table) or enter a negative number to quit.Read
// in the integer.Error check to see if the number is with - in bounds(one - to - five)  – if out of bounds
// print an error messageand start over again, else print out the name of the element.If the user
// enters a valid integer, using if - else statements print out the name of the entered element.Loop
// until the user enters a negative number.
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//
//variables
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	puts("A program to tell the user if their input is in range 1 - 5."); // label to tell user what the program does
	puts("Enter an integer. Enter a negative number to exit the program:\n"); // label to tell user input and how to exit

	int element = 0; // variable to hold input
	while (element >= 0) //while not a nagative input
	{
		scanf("%d", &element); //store the input to variable
		if (element < 0) // if negative print results
		{
			puts("Ending the program. Goodbye.");
			return 0;
		}
		else
		{
			if (element > 5) //if input is bigger than 5
			{
				puts("	ERROR	-	input out of range. Please enter a number between 1 - 5:\n"); //then I severely misprogrammed this....
			}
			else if ((element >= 0) && (element <= 5)) // if input is between 1-5
			{
				switch (element)
				{
				case (1): //1 element is (H) Hydrogen
					puts("Element is (H) Hydrogen");
					break;
				case (2): //2 element is (He) Helium
					puts("Element is (He) Helium");
					break;
				case (3): //3 element is (Li) Lithium
					puts("Element is (Li) Lithium");
					break;
				case (4): //4 element is (Be)
					puts("Element is (Be) Beryllium");
					break;
				case (5): //5 element is (B)
					puts("Element is (B) Boron");
					break;
				default: //the input is 0
					puts("0 is not an element on the Periodic table. Enter a value 1 - 5:\n");
					break;
				}
			} // end of the else if for the range 1-5 output

		} // end of else for input is not negative
	} // end of while not negative
	return 0;
} // end main

// SOURCE
// https://www.angelo.edu/faculty/kboudrea/periodic/structure_numbers.htm