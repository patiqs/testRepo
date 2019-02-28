#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemek
{
  char nev[100];
  int s;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;
  
  int diff=strcmp(x->nev,y->nev);
  
  if(diff!=0) return diff;
   
  return 0;
}

int main(int argc, char *argv[])
{
  int index,i,j;
  
  if(argc==1) return 0;
  
 int db=argc-1;
  
  ELEM tomb[db];
  
  
  index=0;
  
  for(i=1;i<argc;i++)
    {
    strcpy( tomb[index].nev , argv[i] );
    tomb[index].s=i;   
    
    index++;
    }
  
  //printf("%d\n",index);  
      
  qsort(tomb,db,sizeof(ELEM),rendez);
  
  for(j=0;j<db;j++)
    {
      printf("%s (%d)\n", tomb[j].nev , tomb[j].s);
    }  
    
  return 0;
}