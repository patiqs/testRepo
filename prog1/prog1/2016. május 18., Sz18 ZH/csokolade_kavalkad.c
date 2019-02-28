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

  char asztal[N][M];
  int s,index;

 for(s=0;s<N;s++)
 {
  fgets(sor,100,f);
  index=0;

  for(j=0;j<M;j++)
   asztal[s][j]=sor[index++];


 }




 int szum=0;

 for(i=0;i<N;i++)
  for(j=0;j<M;j++)
   if(asztal[i][j]=='X')
    {
     if(asztal[i][j+1]=='X' && asztal[i+1][j]=='X' && asztal[i+1][j+1]=='X')
     {
      szum++;
      }
    }

  printf("%d\n",szum);

   }

  fclose(f);

  return 0;
}