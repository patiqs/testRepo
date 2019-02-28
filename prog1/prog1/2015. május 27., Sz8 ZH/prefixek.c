#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *talalat;

  talalat=strstr(argv[2],argv[1]);
  if(talalat!=NULL)
    {
    talalat=strstr(argv[1],argv[2]);
    if(talalat!=NULL)
    {
      printf("BOTH\n");
      return 0;
    }

    printf("FIRST\n");
    return 0;
    }

  talalat=strstr(argv[1],argv[2]);
  if(talalat!=NULL)
  {
    printf("LAST\n");
    return 0;
  }



  printf("NONE\n");

  return 0;
}