/*
Magas h�zak
�rjon programot, amely a standard bemenetr�l az angol �b�c� nagybet�it tartalmaz� sztringeket olvas be �llom�nyv�gjelig, soronk�nt egyet-egyet!
 A sztring egy utca h�zait �rja le, az 'A' bet� a legkisebb h�zat, a 'Z' a legnagyobbat, a t�bbi bet� pedig ar�nyosan magas h�zakat e tartom�ny k�t v�gpontja k�z�tt.
 Az utc�ban nincs k�t egyform�n magas h�z.
A programja hat�rozza meg �s �rja utc�nk�nt a standard kimenetre, hogy az utca egyik v�g�r�l az utca m�sik v�ge fel� tekintve h�ny darab h�z l�that�,
figyelembe v�ve, hogy a magas h�zak eltakarj�k a m�g�tt�k sorakoz� kisebbeket!*/
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
