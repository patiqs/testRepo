#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    FILE *f;
f=fopen(argv[1],"r");
char c,nev[400],zaszlo[400];
int jel=0,i=0,j=0,volt=0,db=0,max=0;
while(c=fgetc(f))
    {
if(c==':') jel++;
if(jel > 0 && c!=':')
        {
zaszlo[j++]=c;
zaszlo[j]='\0';
        }
if((jel > 1) && (c==':' || c=='\n') &&isalpha(zaszlo[0]))
        {
            j=0;
if(strlen(zaszlo) == 5)
volt++;
        }
if(c=='\n' || c==EOF)
        {
            j=0;
            i=0;
if(volt==jel-2)
            {
db++;
if(max<volt)
max=volt;
            }
volt=0;
jel=0;
        }

if(c==EOF)
break;
    }
printf("%d\n",db);
rewind(f);
while(c=fgetc(f))
    {
if(c==':') jel++;

if(jel==0)
        {
nev[i++]=c;
nev[i]='\0';
        }
if(jel > 0 && c!=':')
        {
zaszlo[j++]=c;
zaszlo[j]='\0';
        }

if((jel > 1) && (c==':' || c=='\n') && (isalpha(zaszlo[0])))
        {
            j=0;
if(strlen(zaszlo) == 5)
volt++;
        }
if(c=='\n' || c==EOF)
        {
            j=0;
            i=0;
            //printf("%d volt=%d\n", jel, volt);
if(volt==jel-2 && volt == max)
printf("%s\n",nev);
jel=0;
volt=0;
        }

if(c==EOF)
break;
    }


return 0;
}