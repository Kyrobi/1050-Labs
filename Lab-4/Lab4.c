

#include <stdio.h>

/*
    Description
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

int main(){

    int start, limit;

    printf("Enter Start: ");   //Prompts user to input a starting value
    scanf("%d", &start);

    //Error check to see if starting value is within the range of 1-100. If not, continue to loop
    //until the values are in legal limits
    while(((start) < 1) || ((start) > 100)){  
        printf("Enter Start: ");
        scanf("%d", &start);
    }

    printf("Enter Limit: "); //Prompts user to input an ending value
    scanf("%d", &limit);

    //Error check to see if ending value is within the range of 1-100. If not, continue to loop
    //until the values are in legal limits
    while(((limit) < 1) || ((limit) > 100)){
        printf("Enter Limit: ");
        scanf("%d", &limit);
    }

    //Checks if the starting value it larger than the ending value
    if(start > limit){
        //If the starting value it larger than the ending value,
        //Count backwards from starting value until it reaches ending value
        for(start = start; start >= limit; start--){
            printf("%d\n", start);
        }
    }
    else{
        //Just prings the range from starting value to ending value
        for(start = start; start <= limit; start++){
            printf("%d\n", start);
        }
    }

    return 0;
}