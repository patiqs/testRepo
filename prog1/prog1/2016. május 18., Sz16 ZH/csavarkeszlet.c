/*Csavarkészlet
Írjon programot, amelynek első parancssori argumentuma egy szöveges állomány neve!
A program a szöveges állományból szerszámosládákat leíró blokkokat olvas be.
 Egy szerszámosládát leíró blokk adatai a következők: az első sor két egész számot tartalmaz, a szerszámosláda hosszúságának (h) és szélességének (sz) az értékét,
  ahol 3 ≤ h ≤ 40 és 3 ≤ sz ≤ 40. A következő h sor mindegyikében sz darab karakter található,
  amelyek a szerszámosládában lévő holmikat jelképezik: 'O' (nagy O betű) jelzi az anyacsavarokat,
   a '*' (csillag) karakter pedig az apacsavarok fejét. Természetesen minden „apafejhez” tartozik csavartest is,
   ezeket '-', '|', '/' és '\' karakterek jelzik. A csavartestek különböző hosszúságúak lehetnek, és – érdekes módon – mindegyik csavartestről egyértelműen megállapítható,
    hogy melyik „apafejhez” tartozik. A fentiektől eltérő karakterek a szerszámosládában található egyéb kacatokat írják le.
A program minden blokk esetén határozza meg és írja a standard kimenetre külön sorban, egymástól pontosan egy szóközzel elválasztva,
hogy hány anyacsavar és apacsavar található a szerszámosládában!*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE *f = fopen(argv[1],"r");
	char line[10];
	while(fgets(line,10,f)!=NULL){
	int anya=0,apa=0;
	int n=atoi(strtok(line," "));
	int g = atoi(strtok(NULL," "));
	for (int i = 0; i < n; ++i)
	{

		char linet[g+2];
		fgets(linet,g+2,f);
		int v=strlen(linet);
		linet[v-1]='\0';
		for (int i = 0; i < v-1; ++i)
		{
			if (linet[i]=='O')
			{
				anya++;
			}
			else if(linet[i]=='*'){
				apa++;
			}
		}
	}
			printf("%d %d\n",anya ,apa);

}

	fclose(f);
	return 0;
}
