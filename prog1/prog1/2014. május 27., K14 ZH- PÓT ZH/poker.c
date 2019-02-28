#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T[5],i,egyezes;	


	while(scanf("%d %d %d %d %d",&T[0],&T[1],&T[2],&T[3],&T[4])>-1)	
	 {
	egyezes=0;
	for(i=0;i<5;i=i+1)
	{
	if(T[0]==T[i]) egyezes=egyezes+1;
	if(T[1]==T[i]) egyezes=egyezes+1;
	if(T[2]==T[i]) egyezes=egyezes+1;
	if(T[3]==T[i]) egyezes=egyezes+1;
	if(T[4]==T[i]) egyezes=egyezes+1;
	}
	//printf("%d",egyezes);
	if(egyezes-1>12) printf("YES\n");
		else printf("NO\n");

	}	


return 0;
}