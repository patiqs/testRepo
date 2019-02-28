#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct szemely
  {
  char vnev[25];
  char knev[25];
  char neme;
  int szev;
  }sz;

int rendez(const void *a, const void *b)
{
 sz *x=(sz*)a;
 sz *y=(sz*)b;

 int diff;

 if(x->szev < y->szev) return -1;
 if(x->szev > y->szev) return 1;

 diff=strcmp(x->vnev, y->vnev);
 if(diff!=0) return diff;

 return strcmp(x->knev, y->knev);

}

int main()
{
  int i,db;
  sz szemelyek[200];

  i=0;
  db=0;

  while(scanf("%s %s %c %d",szemelyek[i].vnev, szemelyek[i].knev, &szemelyek[i].neme, &szemelyek[i].szev)>-1)
  {
    i++;
    db++;
   }

 qsort(szemelyek,db,sizeof(struct szemely),rendez);

   for(i=0;i<db;i++)
   {
   if(szemelyek[i].neme=='N' && szemelyek[i].szev<1996)
    printf("%s %s %d\n",szemelyek[i].vnev, szemelyek[i].knev, 2014-szemelyek[i].szev);
   }

  return 0;
}