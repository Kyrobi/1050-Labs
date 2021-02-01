#include <stdio.h>


/*
    Description
    You are to write a program that displays all integers from 35 through 1 in order from the greatest integer down to the least integer. 
    If one of these integers is divisible by 3, print “Fizz” in replacement. If one of these integers is divisible by 5, print “Buzz” in replacement. 
    If one of these integers is divisible by both 3 and 5, print “FizzBuzz” in replacement.
*/

int main(){

    int counter = 35; //Starts the counter at the number 1
    while(counter>0){ //Loops through 20 times


        if(((counter%5) == 0) && ((counter%3) == 0)){ //If one of these integers is divisible by both 3 and 5, print “FizzBuzz” in replacement. Placed here so it the condition fort both can be checked first
            printf("FizzBuzz\n"); //Prints out "Buzz" if the number is divisble by 5". Also subtracts one the the counter so the next digit can be calculated
            counter--;
        }

        if((counter%5) == 0){ //If the remainder of a number divided by 5 is 0, then it's a number divisible by 5
            printf("Buzz\n"); //Prints out "Buzz" if the number is divisble by 5". Also subtracts one the the counter so the next digit can be calculated
            counter--;
        }

        if((counter%3) == 0){ //If the remainder of a number divided by 3 is 0, then it's a number divisible by 3
            printf("Fizz\n"); //Prints out "Fizz" if the number is divisble by 3". Also subtracts one the the counter so the next digit can be calculated
            counter--;
        }

        else{
            printf("%d\n", counter--);
        }
    }

    return 0;
}