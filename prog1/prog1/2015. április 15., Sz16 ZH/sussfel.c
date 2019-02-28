#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char varosnev[36];
  int ido;
  int darab;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->ido < y->ido) return -1;
  if(x->ido > y->ido) return 1;

  return strcmp(x->varosnev, y->varosnev);

}

int main()
{
  ELEM tomb[20];
  char sor[100],*token;
  int i,db,index,hossz,j;

  i=0;
  db=0;

  while(fgets(sor,100,stdin))
  {
    token=strtok(sor,"/");
    strcpy(tomb[i].varosnev, token);

    token=strtok(NULL,"/");
    hossz=strlen(token);

    index=0;

    for(j=0;j<hossz;j++)
      {
      if(token[j]=='2')
          {
          index=j+1;
          break;
          }
      }
    int jo=0;

    for(j=0;j<hossz;j++)
      if(token[j]=='2') jo++;

    tomb[i].ido=index;
    tomb[i].darab=jo;

    i++;
    db++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    if(tomb[i].darab>=3)
      printf("%s\n",tomb[i].varosnev);


  return 0;
}