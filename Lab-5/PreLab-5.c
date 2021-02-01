#include <stdio.h>
#include <math.h>

/*
    Description
    For the prelab assignment, you are to write a function called log16() to calculate the logarithm base 16
    of a number. 

    You may call any function from math.h such as log() or log10() in your implementation of
    log16(). In your main(), you should loop through powers of 2 starting at 1 (which is 20
    ) up through 4096
    and print these numbers along with their log16() – see sample output below.
    If (like me) you need a refresher on how to convert logarithms, here is some info from Purple Math 
*/

int value;
int counter = 0;
double logValue;

//Makes a function called log16
void log16(){

    logValue = (log(value)/(log(16))); //Log base 16 of a value.
    printf("Log base 16 of %d = %f\n", value, logValue);
}

int main(void){

    //Will loop until 4096
    while(value < 4096){

        //Exponent. Value = 2^counter
        value = pow(2, counter);
        counter++; //Adds one to the counter everytime it loops so the above function can be 2^1, 2^2 ,2^3, 2^4, etc
        log16(); //Calls the log16 function
    }
}


