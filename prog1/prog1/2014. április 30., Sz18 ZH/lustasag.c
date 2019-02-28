#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct munkas
{
  char vezeteknev[25];
  char keresztnev[25];
  int kodolas;
  int teszteles;
  int dokumentalas;
  int konzultacio;
  int kavezas;
  int pihenes;
  int keses;
  int haszontalan_ido;
}MUNK;


int rendezo_algoritmus(const void *a, const void *b)
{
 MUNK *x=(MUNK *)a;
 MUNK *y=(MUNK *)b;

 if(x->haszontalan_ido < y->haszontalan_ido) return -1;
 if(x->haszontalan_ido > y->haszontalan_ido) return 1;

 int difference;


 difference=strcmp(x->vezeteknev, y->vezeteknev);

 if(difference==0)
   return strcmp(x->keresztnev, y->keresztnev);

   return difference;
}

int main()
{
  int i,munkas_darab,kiirt_darab;
  struct munkas munkasok[1000];

  i=0;
  munkas_darab=0;

  while(scanf("%s %s %d %d %d %d %d %d %d",munkasok[i].vezeteknev,munkasok[i].keresztnev,
        &munkasok[i].kodolas, &munkasok[i].teszteles, &munkasok[i].dokumentalas,
        &munkasok[i].konzultacio, &munkasok[i].kavezas, &munkasok[i].pihenes,
        &munkasok[i].keses)>-1)
       {
         munkasok[i].haszontalan_ido=100-(munkasok[i].kavezas  +  munkasok[i].pihenes + munkasok[i].keses);

        i++;
        munkas_darab++;
       }

  qsort(munkasok, munkas_darab, sizeof(struct munkas), rendezo_algoritmus);

  kiirt_darab=0;

  if(munkas_darab<3)
   for(i=0;i<munkas_darab;i++)
   if(munkasok[i].haszontalan_ido<80 && kiirt_darab<3)
    {
    printf("%s %s %d\n",munkasok[i].vezeteknev, munkasok[i].keresztnev, munkasok[i].haszontalan_ido);
    kiirt_darab++;
    }

  if(munkas_darab>=3)
    for(i=0;i<3;i++)
     if(munkasok[i].haszontalan_ido<80 && kiirt_darab<3)
     {
       printf("%s %s %d\n",munkasok[i].vezeteknev, munkasok[i].keresztnev, munkasok[i].haszontalan_ido);
       kiirt_darab++;
      }



  return 0;
}