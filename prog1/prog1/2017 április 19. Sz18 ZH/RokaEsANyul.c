#include<stdio.h>
#include<string.h>
int main()
{
    char sor[1000];
    int p,elony,nyul=0,roka=0;
    fgets(sor,1000,stdin);
    sscanf(sor,"%d %d",&p,&elony);
    fgets(sor,1000,stdin);
    p=strtok(sor," ");
    while(p!=NULL)
    {
        nyul+=atoi(p);
         p=strtok(NULL," ");
    }
    fgets(sor,1000,stdin);
    p=strtok(sor," ");
    while(p!=NULL)
    {
        roka+=atoi(p);
        p=strtok(NULL," ");
    }
    if(roka==nyul+elony)
        printf("0\nDRAW\n");
        else
    if(nyul+elony>roka)
        printf("%d\nRABBIT\n",(nyul+elony)-roka);
        else printf("%d\nFOX\n",roka-nyul-elony);



}
