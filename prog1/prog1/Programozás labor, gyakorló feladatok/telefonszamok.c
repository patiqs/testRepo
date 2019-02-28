#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int db20=0,db30=0,db70=0,i,c;
    char sor[13];
    int szam[12];
    fgets(sor,13,stdin);
    for(i=0;i<strlen(sor)-1;i++)
      {
      szam[i]=sor[i]-48;
      }
    while(szam[0]==0 && szam[1]==6 && ((szam[2]==2 && szam[3]==0) || (szam[2]==3 && szam[3]==0) || (szam[2]==7 && szam[3]==0)))
    {
        if(szam[2]==2 && szam[3]==0)
            db20++;
         if(szam[2]==3 && szam[3]==0)
            db30++;
          if(szam[2]==7 && szam[3]==0)
            db70++;
          fgets(sor,13,stdin);
          for(i=0;i<strlen(sor)-1;i++)
            szam[i]=sor[i]-48;
    }
    printf("%d %d %d\n",db20,db30,db70);
    return 0;
}
