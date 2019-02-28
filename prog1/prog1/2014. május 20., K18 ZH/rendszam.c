#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct kocsi
{
  char rendszam[7];
  char tipus[31];
  int uzembe;
}ELEM;

int main(int argc, char *argv[])
{
  FILE *f,*g;
  int db=0,index=0;

  f=fopen(argv[1],"rb");
  g=fopen(argv[2],"wb");


  ELEM tmp;

  while(fread(&tmp,sizeof(ELEM),1,f))
      {
      if( (tmp.rendszam[0]==tmp.rendszam[1]) && (tmp.rendszam[1]==tmp.rendszam[2] ) )
        if ( (tmp.rendszam[3]==tmp.rendszam[4]) && (tmp.rendszam[4]==tmp.rendszam[5] ))
          db++;
      }

  rewind(f);

  ELEM tomb[db];

  while(fread(&tmp,sizeof(ELEM),1,f))
    {
      if( (tmp.rendszam[0]==tmp.rendszam[1]) && (tmp.rendszam[1]==tmp.rendszam[2] ) )
        if ( (tmp.rendszam[3]==tmp.rendszam[4]) && (tmp.rendszam[4]==tmp.rendszam[5] ))
        {
           tomb[index]=tmp;
           index++;
        }
    }

  fwrite(&tomb,sizeof(ELEM),db,g);

  fclose(f);
  fclose(g);

  return 0;
}