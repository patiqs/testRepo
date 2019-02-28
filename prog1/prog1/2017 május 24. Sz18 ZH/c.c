#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXDARAB 20




typedef struct {
  char orsz[4];
  char rendsz[12];
  char tipus[30];
  int dbok;
}ELEM;

typedef struct {
  char orszag[4];
  int db;
}ELEMKI;


int hasonlito(const void *a, const void *b)
{
    ELEMKI *pa = (ELEMKI *)a;
    ELEMKI *pb = (ELEMKI *)b;

    return (strcmp(pa->orszag,pb->orszag));
}

int main()
{
  FILE *f;
  ELEM t[MAXDARAB];
  ELEMKI tki[MAXDARAB];
  ELEM tmp;
  enum {VAN,NINCS} akad=NINCS;
  int darab=0,kidarab;
  int i,j,x,y;
  char sor[1000], *p;
  
  while(darab < MAXDARAB && (p = fgets(sor,1000,stdin)) != NULL)
    {
      strcpy(t[darab].orsz, strtok(p, ";"));
      strcpy(t[darab].rendsz, strtok(NULL, ";"));
      strcpy(t[darab].tipus, strtok(NULL, "\n"));
      t[darab].dbok=0;
      ++darab;
    }
 // strcpy(tki[0].orszag,t[0].orsz);
   
for(i=0;i<darab;i++)
{
  for(j=0;j<darab;j++)
  {
    if (strcmp(t[i].orsz,t[j].orsz)==0)
      t[i].dbok++;
  }
  
}
    kidarab=0;
   strcpy(tki[0].orszag,t[0].orsz);
   // tki[0].db=t[0].dbok;
    
    for(x=0;x<darab;x++)
    {
      for(y=0;y<kidarab;y++)
      {
	if(y!=x)
	{
	  if (strcmp(t[x].orsz,tki[y].orszag)==0)
	  { 
	  akad=VAN;
	  }
	}
	
	
      }
      
      
      if(akad==NINCS)
      {
	akad=NINCS;
	strcpy(tki[kidarab].orszag,t[x].orsz);
	tki[kidarab].db=t[x].dbok;
	kidarab++;
      }
      
      
      else
      {
	akad=NINCS;
      }
      
    }
    
    qsort(tki, kidarab, sizeof(*tki), hasonlito);
    
    
  /*  for(i=0;i<darab;i++)
  {
    printf("%s %s %s %d\n",t[i].orsz,t[i].rendsz,t[i].tipus,t[i].dbok);

  }
  puts("-----");*/
      for(i=0;i<kidarab;i++)
  {
    printf("%s: %d\n",tki[i].orszag,tki[i].db);

  }
    
  return 0;
}
