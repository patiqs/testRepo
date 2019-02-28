#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct rekord
{
  char csucs[31];
  int  magas;
  char orszag[4];
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;
  
  if(x->magas < y->magas) return 1;
  if(x->magas > y->magas) return -1;
  return 0;
}

int main(int argc, char *argv[])
{
 FILE *f, *g;
 int db=0,i=0;
 
 f=fopen(argv[1],"rb"); 
 g=fopen(argv[2],"wb");
 
 ELEM tmp;
 
 while(fread(&tmp,sizeof(ELEM),1,f))
 {
 
  if(strcmp(tmp.orszag,argv[3])==0)
    db++ ;
 
 }

 rewind(f);
 
 ELEM t[db];
 
 i=0;
 
 while(fread(&tmp,sizeof(ELEM),1,f))
 {
   if(strcmp(tmp.orszag,argv[3])==0)
     {
     strcpy(t[i].csucs,tmp.csucs);
     t[i].magas=tmp.magas;
     strcpy(t[i].orszag, tmp.orszag);
     i++;     
     }
 }
 
 qsort(t,db,sizeof(ELEM),rendez);
 
 for(i=0;i<db;i++)
   fwrite(&t[i],sizeof(ELEM),1,g);

   fclose(f);
   fclose(g);

  return 0;
}