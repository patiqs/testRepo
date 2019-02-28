#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ido;

x:      while(scanf("%f",&ido)>-1)
        {
           if( (int)ido ==0 ) {
                                ido=ido+12;
                                printf("%2.2fam\n",ido);
                                goto x;
                                }
           if( (int)ido <12 ) {
                                ido=ido;
                                printf("%2.2fam\n",ido);
                                goto x;
                                }
            if( (int)ido > 12 ) {
                                ido=ido-12;
                                printf("%2.2fpm\n",ido);
                                goto x;
                                }
            if( (int)ido == 12 ) {
                                ido=ido;
                                printf("%2.2fpm\n",ido);
                                goto x;
                                }


        }
    return 0;
}