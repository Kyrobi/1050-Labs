

#include <stdio.h>

void getString(char *input){

    printf("Please enter a string: ");
    scanf("%256s", input);
    printf("You entered: %s\n", input);
}

int getSegmentLength(char *input){

    int size = 0;
    for(int i = 0; input[i] != '\0'; i++){
        size++;
    }

    size = (size - 1)/3 + 1; //Rounds the integer UP when dividing
    return size;
}

void reverseString(char *input, int size){

    /*if (input[0] == '\0'){
        return;
    }
    else{
        reverseString( &input[1]);
        printf("%c",input[0]);
    }*/
    //printf("\n");

    /*char copy[256];
    sscanf(input, "%s", copy);
    
    for(int i = size -1; i>=0; i--){
        *input = *(copy +i);
        input++;
    }*/
    
    /*int c;
    int start = 0;
    int end = size -1;

    while(start < end){
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        end--;
        start++;
    }*/


    int i;
    int counter =0;
    for(i = size; i >= -2; i--,i--,i--){
        for (counter = 0; counter < 3; counter++){
            printf("%c",input[counter+i]);
        }
    }

    /*

        Here I tried to rebuild the entire string by storing it into a multidimensional array with 3 characters per column
        Then, I tried to print the multidimensional array backwards

    */

    /*
    char temp[256][3];
    char rebuild[256];
    int column = 0; //Or segment
    int row = 0;
    int counter = 0 ;

    for (column = 0; column > size; column++){
        for(row = 0; row > 3; row++){
            temp[row][column] = temp + input[counter];
            counter++;
        }

        row = 0;
    }

    int rebuildCounter = 0;

    for(int column = 0; column > size; column++){
        for (int i = 0; i > 3; i++){
            rebuildCounter =+ 1;
            rebuild[rebuildCounter] = rebuild + temp[i][size = size - rebuildCounter];
        }
    }

    printf("pen %s",rebuild);*/

}

int main(){

    int size;
    char input[256];

    printf("*** Welcome to Lab 9 ***\n");
    getString(input);

    size = getSegmentLength(input);
    printf("There are %d segments in the string.\n", size);

    printf("The modified string is: ");
    reverseString(input, size);
    //printf("The modified string is: %s\n",input);

    printf("\n*** Thanks for doing Prelab 9 ***\n");

    return 0;
}