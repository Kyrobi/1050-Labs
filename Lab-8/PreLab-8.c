

#include <stdio.h>


void getFloat(int *inputInt, float *inputFloat){

    scanf("%d %f", inputInt, inputFloat);

}

void getString(char *inputString){

    scanf("%s", inputString);

}

int GetIntegerArray(int * outputIntArray, int maxsize){

    int size;

    printf("How many integers would you like to input? ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++){
        printf("Enter integer #%d: ", i + 1); //+1 to start the test as "Enter integer #1" instead of "Enter integer #0"
        scanf("%d", &outputIntArray[i]);
    }

    return size;
    
}

int main(){

    int inputInt;
    float inputFloat;
    char inputString[256];
    int array[256];
      
    printf("***********************\n");
    printf("* Welcome to Prelab 8 *\n");
    printf("***********************\n");
 
    printf("Please enter an integar followed by a space followed by a float and then hit enter:\n");
    getFloat(&inputInt,&inputFloat);
    //printf("%d %.2f\n", inputInt, inputFloat); //Debug

    printf("Please enter a string without spaces and then hit enter:\n");
    getString(inputString);
    //printf("%s\n", inputString); //Debug

    int size = GetIntegerArray(array, 64);


    printf("\n***********************\n");
    printf("You entered %d, %.2f, %s\n", inputInt, inputFloat, inputString);
    printf("Array elements:\n");

    for (int i = 0; i < size; i++){
        printf("\tarray[%d]=%d\n", i, array[i]);
    }

}