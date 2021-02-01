
#include <stdio.h>
#include <iostream>


void GetIntArray(int *intArray, int *intArraySize){

    printf("\nPlease enter positive integers, and -1 to end\n");

    int counter = 0;
    while (intArray[counter - 1] != -1){ //Checks to see if the PREVIOUSLY input integer is -1
 
        printf("Element #%d: ", counter + 1); //+1 to start the test as "Element #1" instead of "Element #0"
        scanf("%d", &intArray[counter]);
        counter++; //Moves the array into the next element to receive input

    }


    /**intArraySize = sizeof(&intArray)/sizeof(&intArray[1]);*/
    //*intArraySize = SIZEOF(intArray);
    //printf("Array size: %d\n", (sizeof(&intArray)/sizeof(&intArray[0])));
    
    //I literally can't get this to work ;-;
}

void getTwoString(char *inputString, char *inputString2){

    printf("Please enter a string: ");
    scanf("%s", inputString);

    //printf("%s\n", inputString); //Debug

    printf("Please enter another string: ");
    scanf("%s", inputString2);

    //printf("%s\n", inputString2); //Debug

}

void PrintOutput(char *inputString, char *inputString2, int *intArray){

    printf("\n***********************\n");
    printf("The first string you entered:\n");
    printf("%s\n", inputString);

    printf("The first string you entered:\n");
    printf("%s\n", inputString2);

    printf("Array elements you entered:\n");

    //I couldn't get the sizeof thing to properly caculate the size of the array via pointers and stuff
    //So this is just an alternative method.
    //Since when you enter -1 to quit inputting integers, the -1 also gets put into the array
    //We can assume -1 has to be the last value in the array
    //It will loop until the last value in the array is -1 and then stop
    for (int i = 0; i < 2560; i++){
        if(intArray[i] == -1){
            break;
        }
        else{
            printf("\tarray[%d]=%d\n", i, intArray[i]);
        }
    }

}

int main(){

    char inputString[256];
    char inputString2[256];
    int intArray[256];
    int intArraySize;
      
    printf("***********************\n");
    printf("* Welcome to Prelab 8 *\n");
    printf("***********************\n");
 

    getTwoString(inputString,inputString2);

    GetIntArray(intArray, &intArraySize);

    PrintOutput(inputString,inputString2,intArray);
    system("pause");
    return 0;

}