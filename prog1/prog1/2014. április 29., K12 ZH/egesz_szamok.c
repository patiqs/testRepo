#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
 int i,k,j=1;

 for(k=1;k<argc;k++)
 {

 if(isdigit(argv[k][0]) || argv[k][0]=='-' )
 j=0;
  else
 j=1;

 for (i = 1; i<strlen(argv[k]);i++)
     {
        if(!isdigit(argv[k][i]))
        j=1;
      }

        if(j==1) break;
  }

        if(j==0)
        printf("YES\n");
        else
        printf("NO\n");


return 0;
}