#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct loves
{
  char nev[52];
  int sikeres;
  int sikertelen;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->sikeres < y->sikeres) return 1;
  if(x->sikeres > y->sikeres) return -1;
  return strcmp(x->nev,y->nev);
}

int main()
{
  ELEM tomb[20];
  int i,hossz,db,jdb,rdb,j;
  char sor[100],*token;

  i=0;
  db=0;

  while(fgets(sor,100,stdin))
  {
    jdb=0;
    rdb=0;
    token=strtok(sor,"/");
    strcpy(tomb[i].nev, token);

    token=strtok(NULL,"/");
    hossz=strlen(token);


    for(j=0;j<hossz;j++)
      {
        if(token[j]=='1') jdb++;
        if(token[j]=='0') rdb++;
      }

    tomb[i].sikeres=jdb;
    tomb[i].sikertelen=rdb;

    i++;
    db++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    printf("%s\n",tomb[i].nev);



  return 0;
}