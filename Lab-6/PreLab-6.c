

#include <stdio.h>
#include <math.h>

/*
    For the prelab assignment, you will declare an array of integers in your main() function that has 256
    elements. You will not need all 256 elements, but declaring this extra space means that you can use this
    array to hold a variety of data as long as you use no more than 256 elements.


    You should write a function to initialize an array and another function to print the contents of an array.
    You will use these functions by calling them from main(). You are NOT allowed to do anything in main()
    except:
    • Declare variables
    • Print header information (like “First Array:”).
    • Call functions that you have written

*/
int firstArray[256];

int InitializeArray(){
    int firstArraySize = 20;
    int j = 0;

    for(int i = 0; j < 20; i += 1){
        j += 2;
        firstArray[i] = j;
        printf("  Element %d = %d\n",i ,firstArray[i]);
    }

}

int PrintArray(){

}

int main(void){


    printf("First Array:\n");
    InitializeArray();

    
}