


#include <stdio.h>
#include <math.h>

/*
    Description
   For the lab assignment, you are to write a function to calculate the logarithm of a number for an
    arbitrary base. This function should be named logAny() and it should take parameters of the number
    whose log you wish to calculate, and the base to be used.


    In order to test your logAny() function, you must go through the integers from 1 through 8192 doubling
    your counter each time (i.e., 1,2,4,8,16,32,…,8192). For each of the selected integers, you should display
    that number on a line and then the following logs of that number on indented lines below it: the log
    base 2, log base 4, log base 8, log base 16, and log base 32. See the sample output for an example
*/

double logAny(double loopNum2, double loopNum){
    float logValue;
    logValue = ((log(loopNum2))/(log(loopNum))); //The fomula to calculate the log of a number with changing base
    return logValue; //Return the calculated value
}

int main(void){

    int loopNum = 0; //Keeping track  of the first loop
    int loopNum2 = 2; //For keeping track of the 1st counter for the loop

    int counter = 0; //For keeping track of the first while loop
    int counter2 = 1; //For keeping track of the 2nd counter for the loop

    //The initial loop that will print the numbers. i.e. (Number X:)
    while (loopNum < 8192){

        //Takes the loopNum and set its value to 2^x where X increases by 1 each time it loops via counter++
        loopNum = pow(2, counter);
        counter++;
        printf("Number %d:\n", loopNum);

        while (loopNum2 < 32){

            //Takes the loopNum2 and set its value to 2^x where X increases by 1 each time it loops via counter2++
            loopNum2 = pow(2, counter2);
            counter2++;

            //Prints the base and the log of the number with 6 decimal precision
            //Calls logAny and passes in loopNum and loopNum2
            printf("   Log base %d = %.6f:\n", loopNum2, logAny(loopNum, loopNum2));
        }

        loopNum2 = 2; //Resets the value in the 2nd loop so that it can be looped again or else "loopNum2 < 32" will never be true
        counter2 = 1; //Resets the value in the 2nd loop so that it can be looped again or else "loopNum2 = pow(2, counter2)" will break
    }

}


