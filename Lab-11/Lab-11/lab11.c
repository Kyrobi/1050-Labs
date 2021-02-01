#include <stdio.h>
#include <string.h>
#include "fight.h"
int main(int argc, char * argv[])
{
	FILE * fp;
	char name[256];
	char remainder[256];

	int ac1,hp1=0,hitbonus1;
	char attack11[256];
	char attack21[256];
	
	int ac2,hp2=0,hitbonus2;
	char attack12[256];
	char attack22[256];

	if (argc!=4)
	{
		printf("*** Syntax:\n");
		printf("%s combatant_file combatant1_name combatant2_name\n\n",argv[0]);
		return -1;
	}

	fp=fopen(argv[1],"r");
	if (fp)
	{
		// Throw away the first line
        fgets(name,255,fp);

		// Look for the combatants
		#ifdef DEBUG
		printf("Looking for \"%s\" and \"%s\"...\n",argv[2],argv[3]);
		#endif
		while (!feof(fp))
		{
			if (2==fscanf(fp," %[^,],%s",name,remainder))
			{
				#ifdef DEBUG
				printf("\tCurrent=\"%s\"\n",name);
				#endif
				// Found first one?
				if (0==strcmp(name,argv[2]))
				{
					#ifdef DEBUG
					printf("Found \"%s\"!\n",name);
					#endif
					sscanf(remainder,"%d,%d,%d, %[^,],%[^,]",&ac1,&hp1,&hitbonus1,attack11,attack12);
				}

				// Found the second one?
				if (0==strcmp(name,argv[3]))
				{
					#ifdef DEBUG
					printf("Found \"%s\"!\n",name);
					#endif
					sscanf(remainder,"%d,%d,%d, %[^,],%[^,]",&ac2,&hp2,&hitbonus2,attack21,attack22);
				}
			}
		}
		fclose(fp);

		if (0==hp1)
		{
			printf("*** Error: could not find combatant %s\n",argv[2]);
		}
		else if (0==hp2)
		{
			printf("*** Error: could not find combatant %s\n",argv[3]);
		}
		else
		{
			Fight(	argv[2],ac1,hp1,hitbonus1,attack11,attack12,
					argv[3],ac2,hp2,hitbonus2,attack21,attack22);
		}
	}
	else
	{
		printf("** Error:  Could not open %s\n",argv[1]);
	}
	
}
