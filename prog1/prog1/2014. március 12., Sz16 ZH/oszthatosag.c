#include <stdio.h>

int main()
{
  int i,holjarunk=0,max,a,b,db;

  while(scanf("%d %d",&a,&b)>-1)
  {
  if(a>b) return 0;

  if(holjarunk!=0) 

  holjarunk++;
  db=0;
  max=0;

  for(i=a;i<=b;i++)
   if (i%3==0 && i%9!=0) db++;

  for(i=a;i<=b;i++){
  if(i%3==0 && i%9!=0){
                        max++;
                        if(max == db){
                          printf("%d",i);
                          goto z;
                          }
                          printf("%d ",i);
                         }
  }
z:   if(db==0) printf("-1");

printf ("\n");
  }

  return 0;
}