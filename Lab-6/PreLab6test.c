

#include <stdio.h>
#include <math.h>


int array[247];
int array2[247];
int array3[247];
int size;

int InitializeArray(int array[], int begin, int end, int increment){
    int size = 0;
        int i = 0;
        for(begin; begin <= end; begin += increment){
            array[size] = begin;
            size++;
        }

        return size;
}


void MultArrays(int array[], int array2[], int array3[], int size){

    int increment;
        for(increment = 0; increment < size; increment++){
            array3[increment] = array[increment] * array2[increment]; 
        }
}


void PrintArray(int array[], int array2[], int array3[]){

    int increment;
        for(increment = 0; increment < size; increment++){
            printf("Array 1 Element %d = %d   Array 2 Element %d = %d   Array 2 Element %d = %d\n", increment, array[increment], increment, array2[increment], increment, array3[increment]); 
        }

}



int main(void){
    

    size = InitializeArray(array, 2, 24, 2);
    MultArrays(array,array2,array3,size);

    size = InitializeArray(array2, 4, 48, 4);
    MultArrays(array,array2,array3,size);

    PrintArray(array,array2,array3);


}