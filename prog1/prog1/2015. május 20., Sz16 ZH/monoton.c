#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int rendez(const void *a, const void *b)
{
  int *x=(int*)a;
  int *y=(int*)b;
  
  if(*x<*y) return -1;
  if(*x>*y) return 1;
  
  return 0;
}

int main(int argc, char *argv[])
{
  int hossz=0,i,index=0,monoton=0;
  
  int T[argc];
  
  
  if(argc==1) return 0;
  
  for(i=1;i<argc;i++)
    T[index++]=strlen(argv[i]);
      
  
  if(T[0]==T[index-1])
  {
    printf("YES\n");
    return 0;
  }
  

  
  if(T[0] < T[index-1] )
    for(i=0;i<index-1;i++)
    {
      if(T[i] <= T[i+1])
      {
        monoton++;
      }
    }
    
  if(T[0] > T[index-1])
    for(i=0;i<index-1;i++)
      if(T[i] >= T[i+1]) 
        monoton++;
        

  monoton++;  
       
    if(monoton==argc-1) printf("YES\n");
      else printf("NO\n");
  
    return 0;
}