#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
int n,s[10000],t[10000],hosszt=0,hosszs=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&t[i]);
for(i=0;i<n;i++)
  scanf("%d",&s[i]);
  for(i=0;i<n;i++)
    hosszt+=t[i];

  for(i=0;i<n;i++)
    hosszs+=s[i];

if(hosszt>hosszs)
{printf("%d\n",2*hosszt);
  printf("TURTLE\n");}
  else if(hosszt<hosszs)
{printf("%d\n",2*hosszs);
  printf("SNAIL\n");}
  else
{printf("%d\n",2*hosszt);
  printf("DRAW\n");}



return 0;
}
