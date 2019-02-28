#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long szam1 = 0,szam2 = 0,db=0,szam=0,s=0,x,z=0,y,n,i,meret1=0,meret2=0,meret3=0;
char ch,sor[1000],szov[1000];


kiir()
{
        z = szam1;
        if(z > 0) meret1=0;
        if(z > 9) meret1=1;
        if(z > 99) meret1=2;
        if(z > 999) meret1=3;
        if(z > 9999) meret1=4;
        if(z > 99999) meret1=5;
        if(z > 999999) meret1=6;
        if(z > 9999999) meret1=7;
        if(z > 99999999) meret1=8;
        if(z > 999999999) meret1=9;
        if(z > 9999999999) meret1=10;
        if(z > 99999999999) meret2=11;
        if(z > 999999999999) meret1=12;
        if(z > 9999999999999) meret1=13;
        if(z > 99999999999999) meret1=14;
        if(z > 999999999999999) meret1=15;
        if(z > 9999999999999999) meret1=16;
        if(z > 99999999999999999) meret1=17;
        if(z > 999999999999999999) meret1=18;
        //if(z > 9999999999999999999) meret1=19;
        //if(z > 99999999999999999999) meret1=20;
        y=x+1;
        z = szam2;
        if(z > 0) meret2=0;
        if(z > 9) meret2=1;
        if(z > 99) meret2=2;
        if(z > 999) meret2=3;
        if(z > 9999) meret2=4;
        if(z > 99999) meret2=5;
        if(z > 999999) meret2=6;
        if(z > 9999999) meret2=7;
        if(z > 99999999) meret2=8;
        if(z > 999999999) meret2=9;
        if(z > 9999999999) meret2=10;
        if(z > 99999999999) meret2=11;
        if(z > 999999999999) meret2=12;
        if(z > 9999999999999) meret2=13;
        if(z > 99999999999999) meret2=14;
        if(z > 999999999999999) meret2=15;
        if(z > 9999999999999999) meret2=16;
        if(z > 99999999999999999) meret2=17;
        if(z > 999999999999999999) meret2=18;
        //if(z > 9999999999999999999) meret2=19;
        //if(z > 99999999999999999999) meret2=20;
        
        z = szam1+szam2;
        if(z > 0) meret3=0;
        if(z > 9) meret3=1;
        if(z > 99) meret3=2;
        if(z > 999) meret3=3;
        if(z > 9999) meret3=4;
        if(z > 99999) meret3=5;
        if(z > 999999) meret3=6;
        if(z > 9999999) meret3=7;
        if(z > 99999999) meret3=8;
        if(z > 999999999) meret3=9;
        if(z > 9999999999) meret3=10;
        if(z > 99999999999) meret3=11;
		if(z > 999999999999) meret3=12;
        if(z > 9999999999999) meret3=13;
        if(z > 99999999999999) meret3=14;
        if(z > 999999999999999) meret3=15;
        if(z > 9999999999999999) meret3=16;
        if(z > 99999999999999999) meret3=17;
        if(z > 999999999999999999) meret3=18;
        //if(z > 9999999999999999999) meret3=19;
        //if(z > 99999999999999999999) meret3=20;
        
	
	if (meret1 >= meret2)
	{
	
	printf(" %lu\n+",szam1);
	for(y = meret2;y< meret1;y++)
	{
	putchar(' ');
	}
	printf("%lu\n",szam2);
	
	for(z = 0;z<= meret1+1;z++)
	{
	putchar('-');
	}
	
	putchar('\n');
	if(meret1 == meret3)
	{
	putchar(' ');
	}
	printf("%lu\n",szam1+szam2);
	}
	else
	{
		for(y = meret1;y< meret2;y++)
	{
	putchar(' ');
	}
	printf(" %lu\n+",szam1);

	printf("%lu\n",szam2);
	
	for(z = 0;z<= meret2+1;z++)
	{
	putchar('-');
	}
	
	putchar('\n');
	if(meret2 == meret3)
	{
	putchar(' ');
	}
	printf("%lu\n",szam1+szam2);
	}	
		
	
	
	
	
}
int main()
{
	ch = getchar();
	//while(ch != EOF )
	while(ch != EOF && ch != 'x')
	{
		
		if(ch == '\n')
		{
			sor[s]='\0';
			szam2 = atol(sor);

			
			s=0;
			if(db > 0)
			{
			putchar('\n');
			}
			kiir();
			db++;
		}
		else if( ch == ' ')
		{
			sor[s]='\0';
			szam1 = atol(sor);
			s=0;
		}
		else
		{
			sor[s] = ch;
			s++;
		}
		ch = getchar();
	}
	if(s > 0)
	{
	if(db > 0)
	{
	putchar('\n');
	}
	sor[s]='\0';
	szam2 = atol(sor);
	db++;
	kiir();
	}
	
	return 0;
}
