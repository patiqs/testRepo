#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		int mer1,mer2,ered,x,db;
		char sor1[50],sor2[50];
		while (scanf("%s %s",&sor1,&sor2)!=EOF)
		{
			//ered = strcmp(sor1,sor2);
			db=0;
			ered=0;
			mer1=strlen(sor1);
			mer2=strlen(sor2);
			if(mer1<mer2)
			{
				for(x=0;x<mer1;x++)
				{
					if(sor1[x]!=sor2[x])
					{
						ered = sor1[x] - sor2[x];
						db++;
						break;
					}
					else
					{
						db++;
					}
					
				}
				
				if(ered==0)
				{
					ered=ered - sor2[db];
				}
				
			}
			else if(mer1>mer2)
			{
				for(x=0;x<mer2;x++)
				{
					if(sor1[x]!=sor2[x])	
					{
						ered = sor1[x] - sor2[x];
						db++;
						break;
					}
					else
					{
						db++;
					}
				}
				if(ered==0)
				{
					ered= ered + sor1[db];
				}
			
			}
			else
			{
				for(x=0;x<mer2;x++)
				{
					if(sor1[x]!=sor2[x])	
					{
						ered = sor1[x] - sor2[x];
						db++;
						break;
					}
					else
					{
						db++;
					}
				}
			}
			
			
			
			printf("%d\n",ered);
		}
		
		return 0;
}
