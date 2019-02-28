#include <stdio.h>

	int elso,maso,mert1,mert2,mert3,y,z;
	char ch;

szamol(int x)
{
	int meret=0;
	if(x > 9)meret=1;
	if(x > 99)meret=2;
	if(x > 999)meret=3;
	if(x > 9999)meret=4;
	if(x > 99999)meret=5;
	if(x > 999999)meret=6;
	if(x > 9999999)meret=7;
	if(x > 99999999)meret=8;
	if(x > 999999999)meret=9;
	if(x > 9999999999)meret=10;
	if(x > 99999999999)meret=11;
	if(x > 999999999999)meret=12;
	if(x > 9999999999999)meret=13;
	if(x > 99999999999999)meret=14;
	if(x > 999999999999999)meret=15;
	if(x > 9999999999999999)meret=16;
	if(x > 99999999999999999)meret=17;
	return meret;
}

int main()
{

	while(scanf("%d %d",&elso,&maso)!=EOF)
	{
		if(z!=0)
		{
			printf("\n");
		}
		z++;
		mert1=szamol(elso);
		mert2=szamol(maso);
		mert3=szamol(elso-maso);
		//printf(" %d %d\n",mert1,mert2);
		
			printf(" %d\n-",elso);
			for(y=0;y<(mert1-mert2);y++)
			{
				printf(" ");
			}
			printf("%d\n",maso);
			printf("--");
			for(y=0;y<mert1;y++)
			{
				printf("-");
			}
			printf("\n");
			for(y=0;y<(mert1-mert3);y++)
			{
				printf(" ");
			}
			printf(" %d\n",elso-maso);
		
		//printf("%d %d",szamol(elso),szamol(maso));
	}
} 
