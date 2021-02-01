


#include <stdio.h>
#include <string.h>
#include "basicplayer.h"


int playerCounter = 22; //Contains the amount of players there are

struct players{
    char name[256];
    double avg;
    double obp;
    double slug;

};

void bsortDesc(struct players list[80]);

void PrintAllStats(BasicPlayer player)
{
    int ab,walks,singles,doubles,triples,hr;

    struct players list[80]; //Decalers the structure we want to use
    

    int counter = 0;
    //Fetches all the player data
    while(GetNextPlayer(&player)){
        walks=GetStat(player.id,WALKS);
        ab=GetStat(player.id,ATBATS);
        singles=GetStat(player.id,SINGLES);
        doubles=GetStat(player.id,DOUBLES);
        triples=GetStat(player.id,TRIPLES);
        hr=GetStat(player.id,HOMERUNS);

        //Store the date into the structure
        strcpy(list[counter].name,player.name);
        list[counter].avg = (((double)singles + (double)doubles + (double)triples + (double)hr)/(double)ab);
        list[counter].obp = (((double)singles + (double)doubles + (double)triples + (double)hr + (double)walks)/((double)ab + (double)walks));
        list[counter].slug = (((double)singles + (2*(double)doubles) + (3*(double)triples) + (4*(double)hr))/((double)ab));

        printf("%.3f %.3f %.3f %s", list[counter].avg, list[counter].obp, list[counter].slug, player.name);

        counter++; //Keeps track of how many players there are for future loop uses
        printf("\n");
    }

    int i,j;
    struct players temp; //Declare a temporary structure so that we can perform bubblesort
    
    //Buuble sort gibberish for average
    for (i = 0; i < counter - 1; i++)
    {
        for (j = 0; j < (counter - 1-i); j++)
        {
            if (list[j].avg < list[j + 1].avg)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }



    printf("\n*** By Average ***\n");
    printf("   AVG   OBP   SLUG   NAME\n");
    for(int i = 0; i < playerCounter; i++){
        
        printf("%.3f %.3f %.3f %s\n", list[i].avg, list[i].obp, list[i].slug, list[i].name);
        
    }

    //Bubble sort gibberish for OnBase Pct
    for (i = 0; i < counter - 1; i++)
    {
        for (j = 0; j < (counter - 1-i); j++)
        {
            if (list[j].obp < list[j + 1].obp)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }



    printf("\n*** By OnBase Pct ***\n");
    printf("   AVG   OBP   SLUG   NAME\n");
    for(int i = 0; i < playerCounter; i++){
        
        printf("%.3f %.3f %.3f %s\n", list[i].avg, list[i].obp, list[i].slug, list[i].name);
        
    }

    //Bubble sort gibberish for Slugging pct
    for (i = 0; i < counter - 1; i++)
    {
        for (j = 0; j < (counter - 1-i); j++)
        {
            if (list[j].slug < list[j + 1].slug)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }



    printf("\n*** By Slugging Pct ***\n");
    printf("   AVG   OBP   SLUG   NAME\n");
    for(int i = 0; i < playerCounter; i++){
        
        printf("%.3f %.3f %.3f %s\n", list[i].avg, list[i].obp, list[i].slug, list[i].name);
        
    }
}


int main(void)
{
    BasicPlayer player;
    
    printf("*** Initial Order ***");
    printf("\n   AVG   OBP   SLUG   NAME\n");
        
    PrintAllStats(player);
}
