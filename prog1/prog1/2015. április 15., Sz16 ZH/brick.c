#include <stdio.h>
#include <stdlib.h>

void csere(int t[], int i, int min)
{
  int tmp;

  tmp=t[i];
  t[i]=t[min];
  t[min]=tmp;
}

void buborekos(int t[], int n)
{
  int i,j;

  for(i=n-1;i>0;i--)
    for(j=0;j<i;j++)
      if(t[j]>t[j+1])
        csere(t, j, j+1);
}

int main()
{
  int N,i,j,elemszam;


  scanf("%d",&N);

  for(i=0;i<N;i++)
  {
    scanf("%d",&elemszam);

    int T[elemszam];

    for(j=0;j<elemszam;j++)
      {
      scanf("%d",&T[j]);
      }

      buborekos(T,elemszam);

      printf("Case %d: %d\n",i+1,T[elemszam/2]);

    }



  return 0;
}