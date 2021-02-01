
#include <stdio.h>

// Symbolic Constants
#define FILENAME "DnDMonsterScores.csv"

// Main
int main(void)
{
    FILE * fp;
    char name[256];

    fp = fopen(FILENAME,"r");

    // Only move on if we are able to open the file
    if (NULL!=fp)
    {
        // Throw away the first line
        fgets(name,255,fp);
        printf("Header line was: %s\n",name);


        int monsterAmount = 0;
        float totalAC = 0;
        float totalHP = 0;
        int ac,hp, strength, dex, con, intel, wis, car; //Thwaw variables do nothing except to refer to them in an if statement without erroring

        // Read the important data from the next line
        while (fp && !feof(fp))
        {

            // Only print if we read the 3 fields we expect
            if (3==fscanf(fp," %[^,],%d,%d,",name,&ac,&hp))
            {
                
                printf("[%d] \"%s\" : AC=%d,HP=%d\n",monsterAmount,name,ac,hp);
                monsterAmount++; //Tracks how many monsters there are. Adds one for each items in the next line
                totalAC += ac;
                totalHP += hp;

            }

            //If the next 6 things contains these things, ommitt it or else printf will print weird things
            //This line is solely for fixing of formatting issues
            if(6==fscanf(fp,"%d,%d,%d,%d,%d,%d,",&strength, &dex, &con, &intel, &wis, &car )){}

            /*
                Think of it link chunks. Each line contains 9 elements. The first if satement prints the first 3 elements.
                When it prints out the first 3 elements, there are still 6 more left. So, it will group the next 3 items in that line
                and print those.

                This is fixed with the second if statement. The first reads the 3 elements so there are 6 more left. The second if takes
                those last 6 and tosses them out printing nothing.
            */

        }

        printf("\n\n\nTotal monster count = %d\n", monsterAmount);
        printf("Average AC = %0.2f\n", (totalAC/monsterAmount));
        printf("Average HP = %0.2f\n", (totalHP/monsterAmount));
    }

    // If you open a file, you had better close it
    fclose(fp);
}
