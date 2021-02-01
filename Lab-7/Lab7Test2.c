

#include <stdio.h>
#define COLS 12
#define COLS2 3


//This function should print all of the elements of the passed-in array in horizontal (transposed?) form.
void Print2DArray(int array[][COLS], int rows){

    for(int i = 0; i < rows; i++){

        printf("Row %d: ", i);

        for(int j = 0; j < COLS; j++){
            printf("%d ", array[i][j]);
        }

         printf("\n");
    }

}

//Prints the cutoff values by looping through the arrays
void PrintcutOff(int array[][COLS2], int rows){

    for(int i = 0; i < rows; i++){

        printf("Row %d: ", i);

        for(int j = 0; j < COLS2; j++){
            printf("%d ", array[i][j]);
        }

         printf("\n");
    }

}

//Calculates the letter grade of the array and returns the letter
const char * CalcGrade(int array[][COLS], int cutOff[][COLS2], int column, int topic){
    //Topic for CS
    if (topic == 0){


            if (array[topic][column] >= cutOff[0][0]){
                //printf("A ");
                return "A ";
            }

            else if ((array[topic][column] >= cutOff[1][topic]) && (array[topic][column] < cutOff[0][topic])){
                //printf("B ");
                return "B ";
            }

            else if ((array[topic][column] >= cutOff[2][topic]) && (array[topic][column] < cutOff[1][topic])){
                //printf("C ");
                return "C ";
            }
            
            else if ((array[topic][column] >= cutOff[3][topic]) && (array[topic][column] < cutOff[2][topic])){
                //printf("D ");
                return "D ";
            }

            else if (array[topic][column] < cutOff[3][topic]){
                //printf("F ");
                return "F ";
            }

    }

    //Math
    if (topic == 1){


            if (array[topic][column] >= cutOff[0][topic]){
                //printf("A ");
                return "A ";
            }

            else if ((array[topic][column] >= cutOff[1][topic]) && (array[topic][column] < cutOff[0][topic])){
                //printf("B ");
                return "B ";
            }

            else if ((array[topic][column] >= cutOff[2][topic]) && (array[topic][column] < cutOff[1][topic])){
                //printf("C ");
                return "C ";
            }
            
            else if ((array[topic][column] >= cutOff[3][topic]) && (array[topic][column] < cutOff[2][topic])){
                //printf("D ");
                return "D ";
            }

            else if (array[topic][column] < cutOff[3][0]){
                //printf("F ");
                return "F ";
            }
    }

    //English
    if (topic == 2){

            if (array[topic][column] >= cutOff[0][topic]){
                //printf("A ");
                return "A ";
            }

            else if ((array[topic][column] >= cutOff[1][topic]) && (array[topic][column] < cutOff[0][topic])){
                //printf("B ");
                return "B ";
            }

            else if ((array[topic][column] >= cutOff[2][topic]) && (array[topic][column] < cutOff[1][topic])){
                //printf("C ");
                return "C ";
            }
            
            else if ((array[topic][column] >= cutOff[3][topic]) && (array[topic][column] < cutOff[2][topic])){
                //printf("D ");
                return "D ";
            }

            else if (array[topic][column] < cutOff[3][0]){
                //printf("F ");
                return "F ";
            }

    }

}

void CalcGrade2(int array[][COLS], int cutOff[][COLS2]){


    //Loop through 0-12 students
    for (int i = 0; i < 12; i++){

        printf("Student %d: ", i);
        {
            //Loops through the 3 topics each student has
            for (int j = 0; j < 3; j++){

                //Fetch a letter grade from CalcGrade. The i variable means which student/column to fetch the grade from.
                //The j variable indicates which topic the grade is
                printf(CalcGrade(array, cutOff, i, j));
            }
            printf("\n");
        }

    }

}

int main(void){

    int array[][COLS] = 
            {
                //CS, Math, English
                {72,95,93,98,99,47,97,85,96,94,98,76}, 
                {68,88,97,77,92,32,99,95,91,90,98,82}, 
                {62,95,86,98,90,27,85,91,99,85,90,98}
            };
    printf("Here are the scores:\n");
    Print2DArray(array, 3);


    int cutOff[][3] = 
            {
                //CS, Math, English
                {85,90,90}, 
                {75,80,75}, 
                {60,70,55}, 
                {50,60,40}
            };
    printf("\nHere are the cutoffs:\n");
    PrintcutOff(cutOff, 4);

    printf("\nHere are the grades:\n");
    CalcGrade2(array, cutOff);

}

