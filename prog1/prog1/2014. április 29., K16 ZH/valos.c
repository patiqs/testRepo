#include <stdlib.h>
#include <string.h>

main(int argc,char *argv[])
{ int i,j=1,k,db=0,h;
  float f;
  char s[200];
  for (k=1;k<argc;k++)
  {
     f=atof(argv[k]);
     if (f==0 && argv[k][0]!='0') j=1;
       else j=0;
     strcpy(s,argv[k]);
         h=strlen(s);
         db=0;
     for(i=0;i<strlen(s);i++) {if(s[i]=='.') db++;}
     if (db>1 || db==0) j=1;
     if(s[0]=='.' || s[h-1]=='.') j=1;
         if(s[0]=='-' && s[1]=='.') j=1;
     if (j!=0) break;
  }
  if (j==0) printf("YES\n"); else printf("NO\n");
return 0;}