#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sor
{
  char sor_nev[25];
  int sor_ar;
  int hany_darabot_tudok_venni;
}so;

int rendez(const void *a, const void *b)
{
  so *x = (so *)a;
  so *y = (so *)b;

  if(x->sor_ar  < y->sor_ar) return 1;
  if(x->sor_ar  > y->sor_ar) return -1;

  return strcmp(x->sor_nev, y->sor_nev);

}

int main()
{
  struct sor sorok[300];
  int i,sor_darab;

  i=0;
  sor_darab=0;

  while(scanf("%s %d",sorok[i].sor_nev, &sorok[i].sor_ar)>-1)
  {
    sorok[i].hany_darabot_tudok_venni = 1000/ sorok[i].sor_ar;
    i++;
    sor_darab++;
  }

  qsort(sorok,sor_darab,sizeof(struct sor),rendez);

  for(i=0;i<sor_darab;i++)
    if(sorok[i].hany_darabot_tudok_venni>3)
      printf("%s %d %d\n",sorok[i].sor_nev, sorok[i].sor_ar, sorok[i].hany_darabot_tudok_venni);





  return 0;
}