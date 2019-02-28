#include <stdio.h>

int main()
{
  int N,i,a,b,c;

  scanf("%d",&N);

  for(i=0;i<N;i++)
  {
   scanf("%d %d %d",&a,&b,&c);


   printf("Case %d: ", i+1);

   if(a>=1 && b>=1 && c>=1 && a<=20 && b<=20 && c<=20) printf("good\n");
   else printf("bad\n");

  }


 return 0;
}