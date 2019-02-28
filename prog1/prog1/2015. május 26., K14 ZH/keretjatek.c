#include <stdio.h>
#include <string.h>

int foo(int t[],int s, int o)
{
  int i,j,keresett;

  keresett=t[0];
  
  for(i=0;i<o;i++)
      {
      if(t[i]!=keresett) return 0;
      }
  for(i=(s-1)*o;i<s*o;i++)
  {
    if(t[i]!=keresett) return 0; 
  }

  for(i=0;i<1;i++)
    for(j=0;j<s;j++)
      {
      if(t[j*o+i]!=keresett) return 0;      
      }
  
  for(i=o-1;i<o;i++)
    for(j=0;j<s;j++)
    {
      if(t[j*o+i]!=keresett) return 0;
    }    

  return 1;
}