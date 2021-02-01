

#include <stdio.h>

void getString(char *input){

    printf("Please enter a string: ");
    scanf("%256s", input);
    printf("You entered: %s\n", input);
}

int getStringLength(char *input){

    int size = 0;
    for(int i = 0; input[i] != '\0'; i++){
        size++;
    }

    return size;
}

void reverseString(char *input, int size){

    /*if ( sPtr[0] == '\0'){
        return;
    }
    else{
        reverseString( &sPtr[1]);
        putchar( sPtr[0] );
    }
    printf("\n");*/

    char copy[256];
    sscanf(input, "%s", copy);
    
    for(int i = size -1; i>=0; i--){
        *input = *(copy +i);
        input++;
    }
    //printf("That string reversed is penis %s\n", input);

/*
    int start = 0;
    int end = size -1;

    while(start < end){
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        end--;
        start++;
    }*/

}

int main(){

    int size;
    char input[256];

    printf("*** Welcome to PreLab 9 ***\n");
    getString(input);

    size = getStringLength(input);
    printf("String is %d in length.\n", size);

    reverseString(input, size);
    printf("That string reversed is %s\n",input);

    size = getStringLength(input);
    printf("That string is %d in length.\n", size);

    printf("*** Thanks for doing Prelab 9 ***\n");

    return 0;
}