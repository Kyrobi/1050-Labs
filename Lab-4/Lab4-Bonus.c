

#include <stdio.h>

/*Description
    For the lab assignment, you may use any C statements you wish. However, you will get bonus points if
    you correctly solve the problem without using the if statement, the if/else statement, the switch
    statement, or the while statement. 
    
    You may find the problem a lot easier if you just go ahead and
    forget about the bonus, unless you have extra time at the end of lab. 
    
    If you do want to try the bonus,
    you really might want to use the conditional operator (also called the ternary operator).

    You are to write a program that prompts the user for two positive integers that are less than or equal to
    100. If the user enters an integer that is less than 1 or greater than 100, you must prompt the user
    again. You must continue checking and prompting the user, until the user enters two positive integers
    that are less than 100. 
    
    Call the integers you get from the user Start and Limit respectively.
    Finally, print all integers starting with Start and ending with Limit (inclusive) and stepping by 1. Check
    out the sample output if you aren’t clear on these requirements.
*/

int start, limit;

void errorCheckStart(){
    //A janky way to do loops. If the user inputs a value with illegal bounds,
    //the function will call itself
    (((start) < 1) || ((start) > 100) ? printf("Enter Start: "), scanf("%d", &start), errorCheckStart() : ' ');
    return;
}

void errorCheckLimit(){
    //A janky way to do loops. If the user inputs a value with illegal bounds,
    //the function will call itself
    (((limit) < 1) || ((limit) > 100) ? printf("Enter Limit: "), scanf("%d", &limit), errorCheckLimit() : ' ');
    return;
}

void printBackwards(){
    //Performs a loop of print the values by calling itself
    ((start >= limit) ? printf("%d\n", start), start--, printBackwards() : ' ');
}

void print(){
    //Performs a loop of print the values by calling itself
    ((start <= limit) ? printf("%d\n", start), start++, print() : ' ');
}


int main(){

    printf("Enter Start: ");   //Prompts user to input a starting value
    scanf("%d", &start);
    //Lunch the errorCheckStart function if the Start value contains illegal values
    (((start) < 1) || ((start) > 100) ? errorCheckStart() : ' ');

    printf("Enter Limit: "); //Prompts user to input an ending value
    scanf("%d", &limit);
    //Lunch the errorCheckLimit function if the Limit value contains illegal values
    (((limit) < 1) || ((limit) > 100) ? errorCheckLimit() : ' ');

    //Finally, calls printBackwards if Start value is less than Limit value
    //Else call the normal print function
    ((start > limit) ? printBackwards() : print());

    return 0;
}