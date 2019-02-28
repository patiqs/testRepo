#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  char azon[12];
  int duplaz;
  int szum;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;
  
  if(x->duplaz < y->duplaz) return 1;
  if(x->duplaz > y->duplaz) return -1;
  
  if(x->szum < y->szum) return 1;
  if(x->szum > y->szum) return -1;
  
  return strcmp(x->azon,y->azon);
}

int main()
{
  ELEM tomb[20];
  int i,j,db,hossz;
  
  char sor[30],*token;
  
  i=0;
  db=0;
  
  while(fgets(sor,30,stdin))
  {
    token=strtok(sor,"/");
    strcpy(tomb[i].azon,token);
    
    token=strtok(NULL,"\n");
    hossz=strlen(token);
    
    tomb[i].duplaz=0;
    tomb[i].szum=1;
    
    for(j=0;j<14;j++)
    {
      if(token[j]=='1') tomb[i].szum*=2;
      if(token[j]=='1') tomb[i].duplaz+=1;
    }
  
  
    i++;
    db++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    if(tomb[i].duplaz>=7)
      printf("%s %d\n",tomb[i].azon,tomb[i].szum);




  return 0;
}