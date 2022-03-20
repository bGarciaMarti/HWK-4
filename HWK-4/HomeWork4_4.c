//						HomeWork4_4.c
//
//	By: Bren Garcìa Martì
//	Date: 15 Feb 2021
//	Problem Statement:
//
//	Problem Statement: Write  a  program  that  prompts  the  user  for a conversion type
//      of ther into celsuis or into fahrenheit. Then it prompts again for a temperature
//      to convert to. Use a sentinel value to repeat.
//
//				   /////// Algorithm ///////
// pre processor commands

// main function

// delcare user function toCelsius
// declare user function toFahrenheit
//variables for C and F
//
// while not a nagative input
// switch statement to test conversion type
// prompt at end of do...while
//
// if 1, convert to celsuis
        // prompt for the temperature
        // scanf to take input and put in fahrenheit
        // call function to convert
        // print the results
// if 9 ocnvert to fahrenheit
        // prompt for the temperature
        // scanf to take input and put in celsuis
        // call function to convert
        // print the results
//  default, invalid input message
//
// prompt for conversion type at end of do while
// store into conversion
// end do...while to check negative input
//
// message to show program ended
// end main
//
// ~~~to Celsuis Function ~~~
// celsius = the formula
//      formula is subtract 32 from input and multiply by 1.8
//
// ~~~ to Fahrenheit function ~~~
// fahrenheit = formula
//  formula is multipl input by 1.8 and subtract 32.
//  
//
/////////////////////////////////////////
#include <stdio.h>

#pragma warning(disable: 4996)

float toCelsius(float fahrenheit); // function to turn fahrenheit into C
float toFahrenheit(float celsuis); // function to turn celsuis into F

int main(void)
{
    
    float celsuis = 0.0; //variable for C
    float fahrenheit = 0.0; //variable for F
    int conversion = 0; //variable to test conversion

    puts("A program to convert temperatures between celsuis and fahrenheit.");    
    do //while not a nagative input
    {
        switch (conversion)
        {
        case(1): // converting to celsius
            printf_s("Enter the temperature you would like converted: ");
            scanf_s("%f", &fahrenheit);
            celsuis = toCelsius(fahrenheit);
            printf_s("%.2f degrees in Fahrenheit is %.2f degrees in Celsius.\n", fahrenheit, celsuis);
            break;
        case (9): // converting to fahrenheit
            printf_s("Enter the temperature you would like converted: ");
            scanf_s("%f", &celsuis);
            fahrenheit = toFahrenheit(celsuis);
            printf_s("%.2f degrees in Celsius is %.2f degrees in Fahrenheit.\n", celsuis, fahrenheit);
            break;
        default:
            puts("  ERROR - Please enter a 1 for conversion to celsius or a 9 to convert to fahrenheit.");
            break;
        }
    puts("Enter a negative number to exit program.\nEnter if you are converting to celsius (1) or fahrenheit (9): ");
    scanf_s("%d", &conversion);
    // fflush(stdin);
    } while (conversion >= 0); // end of input not negative loop
    // exit do...while when input was negative
    puts("Ending the program. Goodbye.");
    return 0;
} // end main

// ~~~to Celsuis Function ~~~
float toCelsius(float fahrenheit) // function to conver fahrenheit to celsius
{
    float celsuis = 0.0;
    //printf_s("%f\n\n", fahrenheit);
    celsuis = ((fahrenheit - 32.0) * 0.555555); // celsius = the formula
    // printf_s("%f\n\n", celsuis);
    //      formula is subtract 32 from input and multiply by 1.8
    return (celsuis);
}
// ~~~ to Fahrenheit function ~~~

float toFahrenheit (float celsuis) //function to convert celsius to fahrenheit
{
    float fahrenheit = 0.0;
    fahrenheit = ((celsuis * 1.8) + 32.0);// fahrenheit = formula
      //formula is multiply input by 1.8 and subtract 32.
    return (fahrenheit);
}