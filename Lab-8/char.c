#include <stdio.h>

int main(){

    char c;

    c = 'a';

    for (int i; i < 10; i++){
        printf("%c ",c);
        c = c +1;
    }
    printf("\n");
    return 0;

}