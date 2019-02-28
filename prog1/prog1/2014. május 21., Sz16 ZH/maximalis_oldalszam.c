#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  char sor[1005],mentett[105],jelenolv[105],*token;
  int max,jelenlegi;
  FILE *f;
  
  f=fopen(argv[1],"r");  

  fgets(sor,1000,f);
  
  token=strtok(sor,";");
  
  token=strtok(NULL,";");
  strcpy(mentett,token);
  
  token=strtok(NULL,";");
  max=atoi(token);
  
  while(fgets(sor,1000,f))
  {
   token=strtok(sor,";");
   
   token=strtok(NULL,";");
   strcpy(jelenolv,token);
   
   token=strtok(NULL,";");
   jelenlegi=atoi(token);
   
   if(max<jelenlegi)
   {
     max=jelenlegi;
     strcpy(mentett,jelenolv); 
   } 
  

  }

  printf("%s\n",mentett);
  
  fclose(f);
  return 0;
}