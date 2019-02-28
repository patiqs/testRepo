/*  Prog-1 ZH
 *  Dátum           : 2017.04.19. SZ18
 *  Feladat         : Különféle elemek  
 *  Programnyelv    : ANSI C'99     
 */
#include <stdio.h>
#include <stdlib.h>

int foo(int *t, int n)
{
    int db = 1;

    for (int kulso=1; kulso<n; ++kulso)
    {
        int voltmar = 1;
        
        for (int belso=0; voltmar && belso<kulso; ++belso)
        {  
            if (t[belso] == t[kulso]) 
                voltmar = 0;
        }
        
        if (voltmar)
            db++;
    }
     return db;
}

