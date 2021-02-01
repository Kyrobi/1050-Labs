#include <stdio.h>

int main(){
    

    /*
    Lab C
    Description

    For the lab assignment, write a C program that reads in four integer numbers from user input that will be entered on the same line and separated by a space. 
    The first integer should be called A, the second B, the third C, and the fourth D.
    
    
    Print the following: 
    • Print the values of A, B, C, and D. 
    • Print the value of the sum of A and B. 
    • Print the value of the product of C and D. 
    • Print the value of the integer quotient of B divided by C. 
    • Print the value of the integer remainder of B divided by C. 
    • Print the value of the quantity A times B divided by the quantity C plus D.
    
    
    */

    //Declares three variables
    int a, b, c, d, calculated;

    //Fetches input for values A, B, C, and D
    printf("Enter 4 integer (A, B, C, D) seperated by spaces: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //Prints the initial set of input values onto screen
    printf("*** Initial Values ***\n");
    printf("A=%d\nB=%d\nC=%d\nD=%d", a, b, c, d);

    //Performs Calculations for those 4 values
    printf("\n*** Calculated Values ***\n");
    printf("\nThe sum of A and B = %d",(calculated = a + b)); //Print the value of the sum of A and B. 
    printf("\nThe product of C and D = %d",(calculated = c * d)); //Print the value of the product of C and D. 
    printf("\nThe integer quotient of B divided by C = %d",(calculated = b / c)); //Print the value of the integer quotient of B divided by C. 
    printf("\nThe integer remainder of B divided by C = %d",(calculated = b % c)); //Print the value of the integer remainder of B divided by C.
    printf("\nThe product of A and B divided by the quantity sum of C and D  = %d",(calculated = (a*b)/(c+d))); //Print the value of the quantity A times B divided by the quantity C plus D
    return 0;
}