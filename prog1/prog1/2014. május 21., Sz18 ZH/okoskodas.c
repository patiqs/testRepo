#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct rekord
{
  char neptun[7];
  char nev[51];
  double atlag;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *pa=(ELEM*)a;
  ELEM *pb=(ELEM*)b;

  return strcmp(pa->neptun,pb->neptun);
}

int main(int argc, char *argv[])
{
  int db=0;
  FILE *f,*g;
  
  f=fopen(argv[1],"rb");
  g=fopen(argv[2],"wb");
  double atlag=atof(argv[3]);
  
  ELEM buff;
  
  while(fread(&buff, sizeof(ELEM), 1, f))
  {
    if(buff.atlag>atlag)
    db++;
  }

  ELEM t[db];
  db=0;
  
  rewind(f);
  while(fread(&buff,sizeof(ELEM), 1, f))
  {
    if(buff.atlag>atlag)
    {
      t[db]=buff;
      db++;
    }
  }
  
  qsort(t,db,sizeof(ELEM),rendez);
  
  
  fwrite(&t[0],sizeof(ELEM),db,g);
  
  
  fclose(f);
  fclose(g);
  
  return 0;
}