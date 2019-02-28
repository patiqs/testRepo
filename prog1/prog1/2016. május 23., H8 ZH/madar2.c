#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argv, char *argc[])
{
    FILE *f;
    char line[100];
    char sor[100];
    int i,j,sum=0,t[300]={0},db,mf;
    f=fopen(argc[1],"r");
	while(fgets(line,10,f)!=NULL){
		sum=0;
   		memset(t,0,1200);
		int n=atoi(strtok(line," "));
		int g = atoi(strtok(NULL," "));
		for (int i = 0; i < n; ++i)
		{
			char linet[g+3];
			fgets(linet,g+3,f);
			int v=strlen(linet);
			linet[v-1]='\0';
			for(j=0;j<strlen(linet);j++){
            	t[linet[j]]=1;
   				}

		}
		    		for(i=0;i<300;i++){
        		if(t[i]==1){
					sum++;
	   			}

			}
			printf("%d\n",sum );
	}
    fclose(f);


    return 0;
}
