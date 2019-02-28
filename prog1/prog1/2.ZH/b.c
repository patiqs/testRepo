#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
  int i,hossz=0,no=0;
  FILE *f;
  char *p,sor[10000];
  for(i=1;i<argc;i++)
  {
    f=fopen(argv[i],"r");
    p=fgets(sor,10000,f);
    if(hossz>=strlen(p))
    {
      puts("NO");
      no=1;
      break;
    }
    hossz=strlen(p);
    fclose(f);

  }
  if(no)
  return 0;
  else puts("YES");
}
