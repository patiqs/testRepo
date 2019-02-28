#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct element{
    int kezdes_perc, kezdes_masodperc;
    char cim[100];
}ELEM;

typedef struct vegszam {
	char nev[101];
}VEGSZ;

int rend(const void *a, const void *b)
{
	VEGSZ *pa = (VEGSZ *)a;
  	VEGSZ *pb = (VEGSZ *)b;
  
   	return strcmp(pa->nev,pb->nev);
}

#define MAXDARAB 100

int main(int argc, char *argv[])
{
  FILE *fin;
  int hossz, maxhossz = -1;
  int ch;
  VEGSZ vsz[52];
  ELEM t[MAXDARAB]={0};
  ELEM tmp;
  int darab,db;
  int i,z,ln,ido[51]={0};
  char sor[1000], *p;

  darab = 0;
  
  if (argc <= 1)
  {
    fprintf(stderr, "Tul keves parancssori argumentum!\n");
    exit (-1);
  }
  
  fin = fopen(argv[1], "rb");
  
  if (fin == NULL)
  {
    fprintf(stderr, "Hiba az allomany megnyitasakor!\n");
    exit (-2);
  }
  
	while(fread(&t[darab], sizeof(ELEM), 1, fin) > 0) // - hová - tomb.méret - hány darabot - fájl neve
    {
		  //printf("%d.:(%d)(%d) %s\n",darab, t[darab].kezdes_perc, t[darab].kezdes_masodperc,t[darab].cim);
		  //printf("%s\n",sor);
		  darab++;
	}
/*	for(i=0;i<darab;i++)
	{
		printf(
		printf("%d.:(%d)(%d) %s\n",i, t[i].kezdes_perc, t[i].kezdes_masodperc,t[i].cim);
  		
	}*/
  
  	//max kereses
	  ln=0;
  	for(z=0;z<darab;z++)
	{
		ido[z] = ((t[z+1].kezdes_perc-t[z].kezdes_perc) * 60 ) + (t[z+1].kezdes_masodperc-t[z].kezdes_masodperc);
		if (ln < ido[z] )
		{
			
			//printf("%d\n",ln);
			ln=ido[z];
			//db=z;
		}
		
	}
  
  	//legnygyoak kiszedese
	db=0;
	for  (z=0;z<darab;z++)
	{
		if (ido[z]==ln)
		{
			strcpy(vsz[db].nev,t[z].cim);
			db++;
		}
	}
  
  	if (db == 1 )
  	{
  		printf("%s\n",vsz[0].nev);
  	}
  	else
  	{
  		qsort (vsz, db, sizeof(*vsz), rend);
  		for(z=0;z<db;z++)
  		{
  			printf("%s\n",vsz[z].nev);
  		}
  	}
  
  //scanf("%d",&i);
  return 0;
}
