#include <stdio.h>
#include <math.h>

/*
    Description
    For the prelab assignment, you may not use the while statement, the if statement nor the if/else
    statement. You may wish to try to do this using the ternary operator.

    First, prompt the user for an integer and call it Limit. Using a For loop, you are to write a program that
    prints all perfect square integers from 0 through Limit (the number the user entered) inclusive. If you
    add three to the integer you print and the resultant value is exactly 52, print “Dabo!” on the line before
    printing the integer.
*/

int main(){
    int limit;
    printf("Please enter a limit: ");
    scanf("%d", &limit);
    for (int i = 0; i <= limit; i++){
        (sqrt(i) == (int)sqrt(i) ? (i) + 3 == 52 ? printf("Dabo!\n%d\n", i) : printf("%d\n", i) : ' ');  
    }
}


/*
if ((sqrt(i) == (int)sqrt(i)) {
	if ((i) + 3 == 52) {
		printf("Dabo!\n%d\n", i)
	} else {
		printf("%d\n", i)
	}
} else {
	printf(""));
}

//(sqrt(i) == (int)sqrt(i) ? printf("%d\n", i) : printf(""));


*/

