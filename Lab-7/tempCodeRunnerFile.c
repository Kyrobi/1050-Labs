

#include <stdio.h>
#define COLS 3

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

//This function should print all of the elements of the passed-in array in tabular (Vertical) form.
void Print2DArray(int array[][COLS], int rows){

    for(int i = 0; i < rows; i++){
        printf("Row %d: \n", i);
    }

}

//This function should calculate the average for every element in the given row, and print this average.
int PrintRowAverage(int array[][COLS], int whichrow){

}

//This function should calculate the average for every element in the given column, and print thisaverage.
int PrintColAverage(int array[][COLS], int whichcol){

}

int main(void){

    int array[][COLS] = 
            //{{72,1},{95,1},{93,1},{98,1},{99,1},{47,1},{97,1},{85,1},{96,1},{94,1},{98,1},{76,1}};
            {
                //CS, Math, English
                {72,68,62}, 
                {95,88,95}, 
                {93,97,86},
                {98,77,98}, 
                {99,92,90}, 
                {47,32,27}, 
                {97,99,85}, 
                {85,95,91}, 
                {96,91,99}, 
                {94,90,85}, 
                {98,98,90},
                {76,82,98}
            };
    Print2DArray(array, 11);
}

