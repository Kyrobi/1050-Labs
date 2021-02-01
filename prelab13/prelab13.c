#include <stdio.h>
#include "basicplayer.h"

#define AMOUNT 22

int main(void)
{
    BasicPlayer player;
    int id;

   for(int x = 0; x < AMOUNT; x++){
   id = player.id;
    if (GetNextPlayer(&player))
    {
        //if ((-1)!=(walks=GetStat(player.id,WALKS)))
        //for(int id = 1; id < 23; id++);
        //{
            
            id = player.id;

            int walks=GetStat(id,WALKS);
            int atbats=GetStat(id,ATBATS);
            int singles=GetStat(id,SINGLES);
            int doubles=GetStat(id,DOUBLES);
            int triples=GetStat(id,TRIPLES);
            int homeruns=GetStat(id,HOMERUNS);
            
            printf("ID=%d,Name=%s\n",id,player.name);
            printf("\tAB=%d Walks=%d Singles=%d Doubles=%d Triples=%d Homeruns=%d\n",atbats, walks, singles, doubles, triples,homeruns);
        //}
    }
    }
}
