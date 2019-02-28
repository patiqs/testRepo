#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  char rendszam[9];
  int tankolasok;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->tankolasok < y->tankolasok) return 1;
  if(x->tankolasok > y->tankolasok) return -1;

  return strcmp(x->rendszam,y->rendszam);

}

int main()
{
  ELEM tomb[20];
  int i,db,j,hossz,szum;
  char sor[100],*token;

  i=0;
  db=0;

  while(fgets(sor,100,stdin))
  {
    token=strtok(sor,"/");
    strcpy(tomb[i].rendszam,token);

    token=strtok(NULL,"/");
    hossz=strlen(token);
    szum=0;

    for(j=0;j<hossz;j++)
    {
      if(token[j]=='1') szum++;
    }

    tomb[i].tankolasok=szum;

    i++;
    db++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    if(tomb[i].tankolasok>=3)
      printf("%s\n",tomb[i].rendszam);

  return 0;
}