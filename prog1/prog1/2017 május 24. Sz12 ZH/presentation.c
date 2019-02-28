#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char sor1[200], sor2[200];

int foo(char *judge, char *contestant)
{
	int i, j;
	int egyes = 1, kettes = 1, oke = 1;
	FILE *fjud, *fcont;
	fjud = fopen(judge,"r"), fcont = fopen(contestant, "r");

	int cool1 = 1, cool2 = 1;
	while(fgets(sor1,200,fjud) != NULL && fgets(sor2,200,fcont) != NULL)
	{
		for(i=0;sor1[i] != '\0';i++)
		{
			if(sor1[i] == 10)
				break;
			//printf("#%d\t%c(%d)\tvs\t%c(%d)\n", i+1, sor1[i], sor1[i], sor2[i], sor2[i]);
			if(sor1[i] != sor2[i])
				cool1 = 0;
			
		}
		//printf("\nCOOL\t%d\n\n", cool1);
		//printf("\n\n\n--------------------------OR--------------------------\n\n\n");
		for(i=0;sor2[i] != '\0';i++)
		{	
			if(sor2[i] == 10)
				break;
			//printf("#%d\t%c(%d)\tvs\t%c(%d)\n", i+1, sor1[i], sor1[i], sor2[i], sor2[i]);
			if(sor1[i] != sor2[i])
				cool2 = 0;
			
		}
		//printf("\nCOOL\t%d\n\n",cool2);
		
		if(cool1 == 0 && cool2 == 0)
			oke = 0;
		cool1 = 1, cool2 = 1;
	}
	
	
	if(oke == 1)
		return 1;
	else
		return 0;	
}

int main()
{
    puts(foo("judge.txt", "contestant.txt") ? "YES" : "NO");
    return EXIT_SUCCESS;
}
