#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
  FILE *f;
  double szam;

  int db=0,i,j,index;

  f=fopen(argv[1],"rb");

  while(fread(&szam,1,sizeof(double),f))
    db++;

  rewind(f);

  double tomb[db];
  index=0;

  while(fread(&szam,1,sizeof(double),f))
  {
    tomb[index]=szam;
    index++;
  }

  fclose(f);

  f=fopen(argv[1],"wb");

  double tombvissza[db];

  for(i=0;i<db;i++)
      tombvissza[db-1-i]=tomb[i];


  fwrite(&tombvissza,sizeof(double),db,f);


  fclose(f);

  return 0;
}