#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *f = fopen(argv[1],"r");
  char elso_sor[100],sor[100];
  char *token;

  int N,M,i,j,s,hossz;

  while(fgets(elso_sor,100,f)!=NULL)
  {
  token=strtok(elso_sor," ");
  N = atoi(token);

  token=strtok(NULL,"\n");
  M = atoi(token);

  char lada[N][M];
  int s,index;

 for(s=0;s<N;s++)
 {
  fgets(sor,100,f);
  index=0;

  for(j=0;j<M;j++)
   lada[s][j]=sor[index++];


 }




 int apacsavar=0;
 int anyacsavar=0;

 for(i=0;i<N;i++)
  for(j=0;j<M;j++)
   {
   if(lada[i][j]=='O') apacsavar++;
   if(lada[i][j]=='*') anyacsavar++;
   }

  printf("%d %d\n",apacsavar,anyacsavar);

   }

  fclose(f);

  return 0;
}