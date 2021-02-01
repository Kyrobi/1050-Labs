

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define S1 "It's Christmastime in Washington\a\nThe Democrats rehearsed \b\n"\
"Gettin' into gear for four more years\nThings not gettin' worse"\
"\"\\\?\n\n\t\t- Steve Earle"
#define S2 "\n\n\tYou get killed just for      \tlivin' in your\nAmerican skin."
#define S3 "In  these days, you can get no rice.  No razor blades, but you can get knife."
#define S4 "Now some guys they just give up living.  And start dying little by little, piece by piece.      "
#define STRINGCOUNT 4

// Prototypes
char * KillWhiteSpace(char *s);


char * KillWhiteSpace(char *s){

    static char withoutBlank[256];
    int c = 0;
    int d = 0;

    while (s[c] != '\0'){
        if (s[c] != ' ' && s[c] != '\n' && s[c] != '\t'){
            withoutBlank[d] = s[c];
            d++;
        }
        c++;
    }
    withoutBlank[d] = '\0';
    return withoutBlank;
}

// Main
int main(void)
{
    char s[STRINGCOUNT][256]={S1,S2,S3,S4};

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings without whitespace ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,KillWhiteSpace(s[i]));
    }
}
