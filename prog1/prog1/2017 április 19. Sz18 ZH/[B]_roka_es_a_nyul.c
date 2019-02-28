/*  Prog-1 ZH
 *  Dátum           : 2017.04.19. SZ18
 *  Feladat         : A róka és a nyúl 
 *  Programnyelv    : ANSI C'99     
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m; /*n=hányszor kérje be, m=nyúl előnye a rókával szemben*/
    int tmp,szamlalo=0; 
    int nyulossz=0, rokaossz=0;
    
    scanf("%d %d", &n,&m); /*Első sor*/
    
    while(szamlalo!=n)  
    {
        scanf("%d",&tmp);
        nyulossz+=tmp;  
        szamlalo++;
    }
    szamlalo=0;         
    
    while(szamlalo!=n)
    {
        scanf("%d",&tmp);
        rokaossz+=tmp;
        szamlalo++;
    }
    
    if(nyulossz+m==rokaossz)
        printf("0\nDRAW\n");
    else if(nyulossz+m<=rokaossz)
        printf("%d\nFOX\n", rokaossz-(nyulossz+m));
    else
        printf("%d\nRABBIT\n", (nyulossz+m)-rokaossz);
    
    return (EXIT_SUCCESS);
}

