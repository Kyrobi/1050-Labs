

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

void PrintcutOff(int array[][COLS2], int rows){

    for(int i = 0; i < rows; i++){

        printf("Row %d: ", i);

        for(int j = 0; j < COLS2; j++){
            printf("%d ", array[i][j]);
        }

         printf("\n");
    }

}

void PrintGades(int array[][COLS], int cutOff[][COLS2], int rows, int topic){
    //Topic for CS
    if (topic == 0){

        for (int i = 0; i < 12; i++){

            if (array[topic][i] >= cutOff[0][0]){
                printf("A ");
            }

            else if ((array[topic][i] >= cutOff[1][topic]) && (array[topic][i] < cutOff[0][topic])){
                printf("B ");
            }

            else if ((array[topic][i] >= cutOff[2][topic]) && (array[topic][i] < cutOff[1][topic])){
                printf("C ");
            }
            
            else if ((array[topic][i] >= cutOff[3][topic]) && (array[topic][i] < cutOff[2][topic])){
                printf("D ");
            }

            else if (array[topic][i] < cutOff[3][topic]){
                printf("F ");
            }

        }

    }

    if (topic == 1){

        for (int i = 0; i < 12; i++){

            if (array[topic][i] >= cutOff[0][topic]){
                printf("A ");
            }

            else if ((array[topic][i] >= cutOff[1][topic]) && (array[topic][i] < cutOff[0][topic])){
                printf("B ");
            }

            else if ((array[topic][i] >= cutOff[2][topic]) && (array[topic][i] < cutOff[1][topic])){
                printf("C ");
            }
            
            else if ((array[topic][i] >= cutOff[3][topic]) && (array[topic][i] < cutOff[2][topic])){
                printf("D ");
            }

            else if (array[topic][i] < cutOff[3][0]){
                printf("F ");
            }

        }

    }

    if (topic == 2){

        for (int i = 0; i < 12; i++){

            if (array[topic][i] >= cutOff[0][topic]){
                printf("A ");
            }

            else if ((array[topic][i] >= cutOff[1][topic]) && (array[topic][i] < cutOff[0][topic])){
                printf("B ");
            }

            else if ((array[topic][i] >= cutOff[2][topic]) && (array[topic][i] < cutOff[1][topic])){
                printf("C ");
            }
            
            else if ((array[topic][i] >= cutOff[3][topic]) && (array[topic][i] < cutOff[2][topic])){
                printf("D ");
            }

            else if (array[topic][i] < cutOff[3][0]){
                printf("F ");
            }

        }

    }

}

//This function should calculate the average for every element in the given row, and print this average.
/*int PrintRowAverage(int array[][COLS], int whichrow){

    double average = 0;
    double dCOLS = COLS; //Gotta convert it into a double to do double division instead of interger division. Need them decimals

    average = ((array[whichrow][0] + array[whichrow][1] + array[whichrow][2])/dCOLS);
    printf("Average of row %d = %.6f\n", whichrow, average);
}

//This function should calculate the average for every element in the given column, and print thisaverage.
int PrintColAverage(int array[][COLS], int whichcol){

    double average = 0;
    double dCOLS = COLS; //Gotta convert it into a double to do double division instead of interger division

    for(int i = 0; i <= ROW; i++){
        average += array[i][whichcol]; 
    }

    average = average / (ROW + 1);
    printf("Average of col %d = %f\n", whichcol, average);
}*/

int main(void){

    int array[][COLS] = 
            //{{72,1},{95,1},{93,1},{98,1},{99,1},{47,1},{97,1},{85,1},{96,1},{94,1},{98,1},{76,1}};
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
    //CS 0
    //Math 1
    //English 2
    PrintGades(array, cutOff, 12, 0);
    printf("\n");
    PrintGades(array, cutOff, 12, 1);
    printf("\n");
    PrintGades(array, cutOff, 12, 2);


    /*printf("\nHere are the row averages:\n");
    for (int rowCounter = 0; rowCounter <= ROW; rowCounter++){
        PrintRowAverage(array, rowCounter);
    }

    printf("\nHere are the column averages:\n");
    for (int columnCounter = 0; columnCounter < COLS; columnCounter++){
        PrintColAverage(array, columnCounter);
    }*/
}

