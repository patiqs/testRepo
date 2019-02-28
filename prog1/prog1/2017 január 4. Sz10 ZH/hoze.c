#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct szamok {
  	int per;
  	int mpe;
  	char nev[101];
  }SZAM;
  
typedef struct vegszam {
	char nev[101];
}VEGSZ;



int main()
{
	SZAM sz[51];
	VEGSZ vsz[52];
	char sor[1000],*tok,*vegp[51];
	int x=0,z,y,ln=0,ido[51]={0},db=0,min,tmp;

	while(fgets(sor,1000,stdin))
	{
		tok = strtok(sor,";");
		tmp=atoi(tok);
		sz[x].per = tmp;
		tok = strtok(NULL,";");
		if(tok != NULL)
		{
			tmp=atoi(tok);
			sz[x].mpe = tmp;
		}
		tok = strtok(NULL,"\n");
                if(tok != NULL)
		{
			
                        strcpy(sz[x].nev,tok);	
		}
		else
                {
                    break;
                }
		x++;
	}

      /*  for(z=0;z<x;z++)
        {
            printf("%d %d %s\n",sz[z].per,sz[z].mpe,sz[z].nev);
        }*/
        
        
	//max keresés
	for(z=0;z<x;z++)
	{
		ido[z] = ((sz[z+1].per-sz[z].per) * 60 ) + (sz[z+1].mpe-sz[z].mpe);
		if (ln < ido[z] )
		{
			
			//printf("%d\n",ln);
			ln=ido[z];
			//db=z;
		}
		
	}
	
	//legnygyoak kiszedese
	for  (z=0;z<x;z++)
	{
		if (ido[z]==ln)
		{
			strcpy(vsz[db].nev,sz[z].nev);
			db++;
		}
	}

	//printf("%d\n",db);
//rintf("%d\n",db);
  	if (db == 1 )
  	{
  		printf("%s\n",vsz[0].nev);
  	}
  	else
  	{
		for(z=0;z<db;z++)
		{
			for(y=z+1;y<db;y++)
			{
				tmp = strcmp(vsz[z].nev,vsz[y].nev);
				//printf("%d\n",tmp);
				if( tmp > 0)
				{
					//printf("benn\n");
					strcpy(vsz[51].nev,vsz[z].nev);
					strcpy(vsz[z].nev,vsz[y].nev);
					strcpy(vsz[y].nev,vsz[51].nev);
				}
			}
		}
		for(z=0;z<db;z++)
		{
			printf("%s\n",vsz[z].nev);
		}
		
  	}
  	
  	
  return 0;
}
