#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  char nev[52];
  int het;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->het < y->het) return -1;
  if(x->het > y->het) return 1;

  return strcmp(x->nev,y->nev);

}

int main()
{
  ELEM tomb[20];
  int i,db,j,talalt,hossz;
  char sor[100],*token;

  i=db=0;

  while(fgets(sor,100,stdin))
  {
    token=strtok(sor,"/");
    strcpy(tomb[i].nev,token);

    talalt=0;

    token=strtok(NULL,"/");
    hossz=strlen(token);

    for(j=0;j<hossz;j++)
      if(token[j]=='1')
      {
        talalt=j+1;
        break;
      }

    tomb[i].het=talalt;

    i++;
    db++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    printf("%s\n",tomb[i].nev);

  return 0;
}