#include <stdio.h>

int main(){
    

    /*
    
    Description

    For the prelab assignment, write a C program that reads in two integer numbers from user input. Save
    the values of these numbers in two variables called X and Y. Print the values of X and Y. Print the value
    of X multiplied times Y. Print the value of X divided by Y. Print the value of X plus 1, quantity times Y
    (e.g., if X is 5 and Y is 2 then X plus 1 quantity times Y is 12 because X plus 1 is 6 and 6 times 2 is 12).
    Print the values of X and Y again to show that they did not change*/

    //Declares three variables
    int x, y, calculated;

    //Fetches input for values X and Y
    printf("=== Initial Values ===\n");
    printf("Enter an integer for X: ");
    scanf("%d", &x);
    printf("Enter an integer for Y: ");
    scanf("%d", &y);

    //Performs multiplication for X and Y
    printf("\n\n=== Calculated Values ===\n");
    printf("X times Y: %d\n", calculated = x * y); //Multiplies X and Y
    printf("X divided by Y: %d\n", calculated = x / y); //Divides X by Y
    printf("X plus 1, quantity times Y: %d\n", (calculated = (x + 1)*y));//(X+1) * Y*

    printf("\n=== Final Values ===\nValue for X: %d\nValue for Y: %d\n",x ,y);
    return 0;
}