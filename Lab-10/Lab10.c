

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define CLEARTEXT \
"It's Christmastime in Washington\a\nThe Democrats rehearsed \b\n"\
"Gettin' into gear for four more years\nThings not gettin' worse"\
"\"\\\?\n\n\t\t- Steve Earle"

// Prototypes
void Encrypt(char *in, int displacement);
void Decrypt(char *in, int displacement);

// Main
int main(void)
{
    char s[1][256]={CLEARTEXT};

    printf("**** Original Strings ****\n");
    printf("%s\n",s[0]);


    printf("\n\n**** Encrypted ****\n");
    Encrypt(s[0],2);

}

// Function implementations
void Encrypt(char *s, int displacement)

{

    static char Encrypt[256];
    //Declare two varaible for counting purposes
    int c = 0;
    int d = 0;

     while (s[c] != '\0'){
        if (s[c] != '\n' && s[c] != '\t'){ //Checks to see if there's random characters
            if (s[c] == ' '){
                Encrypt[d] = ' ';
                d++;
            }
            else{
                Encrypt[d] = s[c] += displacement; //String arithmatic by adding 2 as displacement
                d++; //Once successfully added, go to the next value in char encrypt
            }
        }
        c++; //If failed, nothing is added onto the Encrypt string and goes to the next value in the unencrypted string
    }
    Encrypt[d] = '\0'; //Addeds the null terminator to the end of the string when the loop finishes
    printf("%s", Encrypt);


    static char Decrypt[256];
    //Resets the variable for counting purposes (Keep track of current position in string)
    c = 0;
    d = 0;


//Everything is the same as the operation above
    printf("\n\n**** Decrypted ****\n");

    while (s[c] != '\0'){
        if (s[c] != '\n' && s[c] != '\t'){
            if (s[c] == ' '){
                Decrypt[d] = ' ';
                d++;
            }
            else{
                Decrypt[d] = s[c] -= displacement; //Instead of adding, take subtract 2 to get the original value
                d++;
            }
        }
        c++;
    }
    Decrypt[d] = '\0';
    printf("%s", Decrypt);
}
