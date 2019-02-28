#include <stdio.h>
#include <string.h>

int main()
{
    char sor[20];
    int i,hossz,spacek;

    while(fgets(sor, 20, stdin)!=NULL)
    {
     spacek=0;
     hossz=strlen(sor);
     for(i=0;i<hossz;i=i+1)
     {
         if(sor[i]==' ') spacek++;
     }
     if(spacek==0 && hossz>=10) printf("%s", sor);
    }
    return 0;
}