#include <stdio.h>


/*
    Description
    For the prelab assignment, you are to write a program that prints all integers from 1 through 20 using a while loop.
    On the same line with each integer, print whether it is even or odd.
*/

int main(){

    int counter = 1; //Starts the counter at the number 1

    while(counter<21){ //Loops through 20 times

        if((counter%2) == 0){ //If the remainder of a number divided by 2 is 0, then it's an even number
            printf("%d - Even\n", counter++); //Prints out the current number and tags it with "Even". Also adds one the the counter so the next digit can be calculated
        }
        else{
            printf("%d - Odd\n", counter++);
        }
    }

    return 0;
}