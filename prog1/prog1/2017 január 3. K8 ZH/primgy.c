#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int db = argc-1;
	int tomb[1000]={0},szam,x,z,tmp,veg,dbszam=0;
	enum prim{PRIM,NEM}STAT=PRIM;
	enum vann{VAN,NEME}VSTAT=NEME;
	
	for(x=0;x<db;x++)
	{
		tomb[x]=atoi(argv[x+1]);
	}
	
	veg = tomb[0];
	
	for(x=1;x<db;x++)
	{
		veg = veg + tomb[x];
		szam = tomb[x]+tomb[x-1];
		tmp = szam -1;
		while(szam%tmp!=0)
		{
			tmp--;
		}
			
		if(tmp!=1)
		{
			//printf("itt_c\n");
			STAT = NEM;
		}
		 
	}
	
	szam = tomb[0]+tomb[db-1];
	tmp = szam -1;
	while(szam%tmp!=0)
	{
		tmp--;
	}
			
	if(tmp!=1)
	{
		//printf("itt_v\n");
		STAT = NEM;
	}
	
	for(x=0;x<db;x++)
	{
		for(z=0;z<db;z++)
		{
			if(x+1==tomb[z])
				VSTAT = VAN;
			//break;
		}
		if (VSTAT == VAN)
		{
			VSTAT = NEME;
			//printf("VAN\n");
		}		
		else
		{
			STAT = NEM;
		}
			
	}
	
/*	printf("%d\n",db);
	printf("%d\n",dbszam);
	for(x=0;x<db;x++)
		printf("%d",tomb[x]);
	*/
//	if(dbszam!=db)
//		STAT = NEM;
	
	if(db%2==1)
		STAT = NEM;
	
	if(STAT==PRIM)
		printf("%d YES\n", veg);
	else
		printf("NO\n");
	
	//scanf("%d",db);
	return 0;
}

