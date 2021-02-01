

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


void PrintArray(int array[], int size){

    for(int i; i <= size; i++){

        printf("  Element %d = %d\n",i ,array[i]);
    }
}

int InitializeArray(int array[], int begin, int end, int increment){

    int size = 0;
    if(begin < end){
        for(int begin; begin <= end; begin += increment){
            size++;
        }

        PrintArray(increment,size);
    }

    if(begin > end){
        for(int begin; begin <= end; begin -= increment){
            size--;
        }

        PrintArray(increment,size);

    }

}

int main(void){

    int array[256];

    printf("First Array:\n");
    InitializeArray(array[9], 2, 20, 2);


     printf("First Array:\n");
     InitializeArray(array[9], 2, 20, 2);

}