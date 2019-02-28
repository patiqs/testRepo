#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
  char sor[1020],mentett[500],jelenlegi_mentett[500], *token;
  int max,jelenlegi_ertek;

  while(fgets(sor,1020,stdin))
  {
    token=strtok(sor,"?");

    token=strtok(NULL,"=");
    strcpy(mentett,token);
    token=strtok(NULL,"&");
    max=atoi(token);

    while(token=strtok(NULL,"="))
    {
      strcpy(jelenlegi_mentett,token);
      token=strtok(NULL,"&");
      jelenlegi_ertek=atoi(token);

      if(max<jelenlegi_ertek){
                                max=jelenlegi_ertek;
                                strcpy(mentett,jelenlegi_mentett);
                            }

    }

      printf("%s\n",mentett);

  }

  return 0;
}