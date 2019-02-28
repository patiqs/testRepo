#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

int n=0,m=0,max=0,elvalaszto=0,vanpiros=0,pirosDb=0;
char nev[400],zaszlo[400];
char c;
int db=0;
c = 'a';

while (c != EOF)
{
c = getchar();

if(c == ':')
{
elvalaszto++;
}
if(elvalaszto == 0 && c != ':')
{
nev[n] = c;
++n;
nev[n] = '\0';
}
if(elvalaszto> 0 && c != ':')
{
zaszlo[m] = c;
++m;
zaszlo[m] = '\0';
}
if((elvalaszto> 1) && ((c == ':') || (c == '\n')) &&isalpha(zaszlo[0]))
{
m=0;
if((strlen(zaszlo)) == 5)
{
db++;
}
}
if(c == '\n' || c == EOF)
{
if(db == elvalaszto-2)
{
printf("%s\n", nev);
return 0;
}
n = 0;
m = 0;
elvalaszto = 0;
db=0;
}

}
return EXIT_SUCCESS;
}