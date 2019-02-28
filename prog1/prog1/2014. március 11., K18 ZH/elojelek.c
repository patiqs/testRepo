#include <stdio.h>

int main()
{
 int szam,N,i,sorszam,negativ,pozitiv;
 
 scanf("%d",&N);
 
 sorszam=1;
 
 while(N!=0)
 { 
   negativ=0;
   pozitiv=0;
 
   for(i=0;i<N;i=i+1)
   {
    scanf("%d",&szam);
   
    if(szam>0) pozitiv=pozitiv+1;
    if(szam<0) negativ=negativ+1;
   } 
 
 if(negativ<pozitiv) printf("%d\n",sorszam);
 sorszam=sorszam+1;
 scanf("%d",&N);
 }

return 0;
}