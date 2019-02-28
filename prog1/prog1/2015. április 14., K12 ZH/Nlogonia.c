#include <stdio.h>
#include <string.h>

int main()
{
  int N,i,xorigo,yorigo,x1,y1,xjel,yjel;

  while(scanf("%d",&N)>-1 && N!=0)
  {
    scanf("%d %d",&xorigo,&yorigo);

    x1=xorigo;
    y1=yorigo;


    for(i=0;i<N;i++)
    {
      scanf("%d %d",&xjel,&yjel);

      x1=xjel;
      y1=yjel;



      if(x1==xorigo  || y1==yorigo)     printf("divisa\n");
       if(x1>xorigo && y1>yorigo)       printf("NE\n");
      if(x1>xorigo && y1<yorigo)        printf("SE\n");
      if(x1<xorigo && y1<yorigo)        printf("SO\n");
      if(x1<xorigo && y1>yorigo)        printf("NO\n");


    }

  }

  return 0;
}