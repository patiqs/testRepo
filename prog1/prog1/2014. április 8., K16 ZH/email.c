#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int is_email_address(char *t)
{
  int i,hossz,kukacdarab,kukachely,pontszam,ponthely;

  hossz=strlen(t);

  
  for(i=0;i<hossz;i++)
    if(!isalnum(t[i]) && !isdigit(t[i])  &&  t[i]!='-' && t[i]!='@' && t[i]!='.') return 0;

  
    kukacdarab=0;

    for(i=0;i<hossz;i++)
    if(t[i]=='@') kukacdarab++;

    if(kukacdarab!=1) return 0;

  


  if(t[0]=='@' || t[hossz-1]=='@') return 0;

 
 
  pontszam=0;
  kukachely=0;

  for(i=0;i<hossz;i++)
    if(t[i]=='@') kukachely=i;

    for(i=kukachely;i<hossz;i++)
	{
    	if(t[i]=='.') pontszam++;
	}

    if(pontszam<1) return 0;




  for(i=kukachely;i<hossz;i++)
  {
   if(t[i]=='.' && (t[i-1]=='.' || t[i-1]=='@'))    return 0;
  }



  
  if( t[hossz-1]=='.' || t[hossz-2]=='.') return 0;


  return 1;
}