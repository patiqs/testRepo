#include <stdio.h>

int main()
{
  int tmp,i,T[3],voltcsere;

  while(scanf("%d %d %d",&T[0],&T[1],&T[2])>-1)
  {
  if(T[0]==0 && T[1]==0 && T[2]==0) return 0;

  voltcsere=-1;
  while(voltcsere)
  {
   voltcsere=0;
   i=0;

   while(i<3)
   {
      if(T[i]>T[i+1])
      {
     voltcsere=-1;
      tmp=T[i];
      T[i]=T[i+1];
      T[i+1]=tmp;
       }
    i++;
    }


   }

   printf("%d\n",T[1]);
  }




  return 0;
}