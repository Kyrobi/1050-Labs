

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

int InitializeArray(int array[], int begin, int end, int increment){
    int size = 0; //Stores the size of the array

    //To loop backwards if the beginning value is smaller than ending -- normally expected values
    if (begin <= end){
            //Keeps on looping until beginnning values equals the ending value increasing by INCREMENT each loop
            for(begin; begin <= end; begin += increment){

                //Go through the array and assign the value of INCREMENT to it
                array[size] = begin;

                //However many times this loop runs means how big the size of the array is
                size++;
        }

    }

    //To loop backwards if the beginning value is larger than ending
    if(begin >= end){

            for(begin; begin >= end; begin -= increment){
                array[size] = begin;
                size++;
        }

    }
        return size; //Fetches the size and assign the value to size in main();
}


void MultArrays(int array[], int array2[], int array3[], int size){

    int increment;
        for(increment = 0; increment < size; increment++){
            array3[increment] = array[increment] * array2[increment]; 
        }
}


void PrintArray(int array[], int array2[], int array3[], int size){

    int increment;
        for(increment = 0; increment < size; increment++){
            printf("    Array 1 Element %d = %d   Array 2 Element %d = %d   Array 2 Element %d = %d\n", increment, array[increment], increment, array2[increment], increment, array3[increment]); 
        }

}



int main(void){

    int size; //Stores the size of the array
    //Declares 3 different arrays with size of 256
    int array[256];
    int array2[256];
    int array3[256];



    printf("First Arrays\n");
    /*
        Notes:
        1). Arguments for InitializeArray: (Name of array being modified), (Starting value), (Ending Value), (Interval difference between each value)
    */

    //Calls InitializeArray to fetch the size of the FIRST set of arrays.
    //The size is later used to determine how many times a 
    //loop should be determined by the size of the array
    //InitializeArray also assigns the values to the FIRST array
    size = InitializeArray(array, 2, 20, 2);

    //After the size and values for the array are determined,
    //It grabs the values of array and array2 and multiplies them to store it in array3
    MultArrays(array,array2,array3,size);


    //Fetch size and assign values to SECOND set of arrays
    size = InitializeArray(array2, 4, 40, 4);

    MultArrays(array,array2,array3,size);

    //Prints the final values of array * array2 = array3
    PrintArray(array,array2,array3,size);


    printf("Second Arrays\n");
    size = InitializeArray(array, 40, 0, 4);
    MultArrays(array,array2,array3,size);

    size = InitializeArray(array2, 99, 9, 9);
    MultArrays(array,array2,array3,size);

    PrintArray(array,array2,array3,size);

}