#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  char sor[35],*token;
  int i,teszt,szam1,szam2,jel1,jel2;

  gets(sor);
  teszt=atoi(sor);

  gets(sor);
  token=strtok(sor,":");

  token=strtok(NULL,":");
  szam1=atoi(token);

  token=strtok(NULL,":");
  szam2=atoi(token);

  for(i=0;i<teszt-1;i++)
  {

  gets(sor);
  token=strtok(sor,":");

  token=strtok(NULL,":");
  jel1=atoi(token);

  token=strtok(NULL,":");
  jel2=atoi(token);

  if(szam1>=jel1 || szam2>=jel2)
  {
    printf("NO\n");
    return 0;
  }

  }

  printf("YES\n");

  return 0;
}