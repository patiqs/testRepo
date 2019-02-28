#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int foszam,db=0,x,y=0,b,a,maradek,szamok[500]={0},szam;
  char ch,sor[200];
  enum {PRIM,NEM} stat = PRIM;
 // printf("1.\n");
  //ch = getchar();
  
  while(scanf("%d",&szam) != EOF)
  {
  		szamok[db]= szam;
		db++;
  }
  /*
  while(ch != EOF && ch != 'x')
  {
    if(ch == ' ' || ch == '\n')
    {
      sor[y]='\0';
      szamok[db]=atoi(sor);
      db++;
      y=0;
    }
    else
    {
    sor[y] = ch;
    y++;
    }
    ch = getchar();
  }
 
  if(y>0)
  {
  	sor[y]='\0';
  	szamok[db]=atoi(sor);
  	db++;	
  }
/*printf("2.\n");
   for(x=0;x<db;x++)
  {  
      printf("-%d. ",szamok[x]);
  }
 printf("---+++\n"); */
  for(x=0;x<db;x++)
  {    
    a=szamok[0];
    b=szamok[x+1];

    while(1)
    {   
	  //printf("a:%d ",a);
           //printf("b:%d ",b);
        if(a == b)
	    	break;
	
	    if (a > b )
	        a -= b;
	    else
	        b -= a;
     
    if (b == 0 ||a == 0)
    {
      b =1;
        break;
    }
    }
    //printf("lnko=%d\n", b);

    
    if (b != 1)
    {
      stat = NEM;
    }
  }
  
 /*   for(x=0;x<db;x++)
  {    
	printf("%d\n",szamok[x]);
  }*/
     
  if(stat == PRIM)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  
  return 0;
}
