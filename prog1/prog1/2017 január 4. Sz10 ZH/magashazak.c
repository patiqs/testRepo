/*
Magas házak
Írjon programot, amely a standard bemenetrõl az angol ábécé nagybetûit tartalmazó sztringeket olvas be állományvégjelig, soronként egyet-egyet!
 A sztring egy utca házait írja le, az 'A' betû a legkisebb házat, a 'Z' a legnagyobbat, a többi betû pedig arányosan magas házakat e tartomány két végpontja között.
 Az utcában nincs két egyformán magas ház.
A programja határozza meg és írja utcánként a standard kimenetre, hogy az utca egyik végérõl az utca másik vége felé tekintve hány darab ház látható,
figyelembe véve, hogy a magas házak eltakarják a mögöttük sorakozó kisebbeket!*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],i,db[1000]={0},utcak=0,max;
    while(gets(s)!=NULL)
    {
        db[utcak]=1;
        max=s[0];
        for(i=1;i<strlen(s);i++)
        {
            if(s[i]>max)
                {
                    db[utcak]++;
                    max=s[i];
                }
        } printf("%d\n",db[utcak]);
        utcak++;
    }

    return 0;
}
