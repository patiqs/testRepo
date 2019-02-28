#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct olvas
{
  char cim[52];
  int elolvasott;
  int oldalszam;
  double arany;
}ELEM;

int rendez(const void *a, const void *b)
{
 ELEM *x = (ELEM*)a;
 ELEM *y = (ELEM*)b;



 if(x->arany > y->arany) return -1;
 if(x->arany < y->arany) return 1;

 return strcmp(x->cim,y->cim);
}

int main()
{
  ELEM tomb[20];
  int db,i;

  char sor[100],*token;

  i=0;
  db=0;

  while(fgets(sor,100,stdin))
  {
    token=strtok(sor,"/");
    strcpy(tomb[i].cim,token);

    token=strtok(NULL,"/");
    tomb[i].elolvasott=atoi(token);

    token=strtok(NULL,"/");
    tomb[i].oldalszam=atoi(token);

    tomb[i].arany=(double)tomb[i].elolvasott/tomb[i].oldalszam;

    i++;
    db++;
  }


  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
   printf("%s\n",tomb[i].cim);

  return 0;
}