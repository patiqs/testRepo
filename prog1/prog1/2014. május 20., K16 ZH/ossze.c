#include <stdlib.h>
#include <stdio.h>

int rendez(const void *a,const void *b)
{
  int *x = (int*)a;
  int *y = (int*)b;

  if(*x<*y) return -1;
  if(*x>*y) return 1;
  if(*x==*y) return 0;
}

int main(int argc, char *argv[])
{
  int szam;

  FILE *f,*g,*h;

  f=fopen(argv[1],"rb");

  int db1=0;
  while(fread(&szam,sizeof(int),1,f))
    db1++;

  rewind(f);

  int tomb1[db1];
  int index1=0;

  while(fread(&szam,sizeof(int),1,f))
    {
      tomb1[index1++]=szam;
    }


  fclose(f);

  g=fopen(argv[2],"rb");

  int db2=0,index2=0;

  while(fread(&szam,sizeof(int),1,g))
    db2++;

  rewind(g);

  int tomb2[db2];

  while(fread(&szam,sizeof(int),1,g))
    {
      tomb2[index2++]=szam;
    }

  fclose(g);


  int tomb3[db1+db2],i,index3=0;

  for(i=0;i<db1;i++)
    tomb3[index3++]=tomb1[i];

  for(i=0;i<db2;i++)
    tomb3[index3++]=tomb2[i];

  qsort(tomb3,db1+db2,sizeof(int),rendez);

  h=fopen(argv[3],"wb");



  fwrite(&tomb3,sizeof(int),db1+db2,h);


  fclose(h);

  return 0;
}