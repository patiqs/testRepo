#include <stdio.h>
#include <string.h>

int main()
{
  int i,hossz;
  char s[100];

  while(scanf("%s",s)>-1)
  {
    hossz=strlen(s);

    for(i=0;i<hossz;i++)
    {

     if(s[i]=='A') printf("2");
     if(s[i]=='B') printf("22");
     if(s[i]=='C') printf("222");
     if(s[i]=='D') printf("3");
     if(s[i]=='E') printf("33");
     if(s[i]=='F') printf("333");
     if(s[i]=='G') printf("4");
     if(s[i]=='H') printf("44");
     if(s[i]=='I') printf("444");
     if(s[i]=='J') printf("5");
     if(s[i]=='K') printf("55");
     if(s[i]=='L') printf("555");
     if(s[i]=='M') printf("6");
     if(s[i]=='N') printf("66");
     if(s[i]=='O') printf("666");
     if(s[i]=='P') printf("7");
     if(s[i]=='Q') printf("77");
     if(s[i]=='R') printf("777");
     if(s[i]=='S') printf("7777");
     if(s[i]=='T') printf("8");
     if(s[i]=='U') printf("88");
     if(s[i]=='V') printf("888");
     if(s[i]=='W') printf("9");
     if(s[i]=='X') printf("99");
     if(s[i]=='Y') printf("999");
     if(s[i]=='Z') printf("9999");


    }

  printf("\n");



  }







  return 0;
}