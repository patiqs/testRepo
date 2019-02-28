#include <stdio.h>
#include <stdlib.h>

int lnko(int x,int y)
{
    while (x != y)
        if(x > y)
            x -= y;
        else
            y -= x;
    return x;

    int main()
{
    int a, b;
    int eredmeny;
    
    scanf("%d %d", &a, &b);
    
    eredmeny = lnko(a, b);
    printf("%d\n", eredmeny);

    return EXIT_SUCCESS;
}

/*int main()
{
    int a, b;
    int maradek;
    
    for (scanf("%d %d", &a, &b); maradek = a % b; a = b,b = maradek )
        ;
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    int maradek;
    
    scanf("%d %d", &a, &b);
    for ( ; maradek = a % b; )
    {
        a = b;
        b = maradek;
    }
    
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    int maradek;
    
    scanf("%d %d", &a, &b);
    for ( ; ; )
    {
        if((maradek = a % b) == 0)
            break;
        a = b;
        b = maradek;
    }
    
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    int maradek;
    
    scanf("%d %d", &a, &b);
    do
    {
        if((maradek = a % b) == 0)
            break;
        a = b;
        b = maradek;
    } while(1);
    
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    int maradek;
    
    scanf("%d %d", &a, &b);
    while (1)
    {
        if((maradek = a % b) == 0)
            break;
        a = b;
        b = maradek;
    }
    
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    int maradek;
    
    scanf("%d %d", &a, &b);
    while ((maradek = a % b)!=0)
    {
        a = b;
        b = maradek;
    }
    
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    int maradek;
    
    scanf("%d %d", &a, &b);

    while(maradek != 0)
    {
     maradek = a % b;
     
     a = b;
     b = maradek;
     maradek = a % b;
    }
    
    printf("%d\n", b);
    printf("%d\n", maradek);
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    while(a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    
    printf("%d\n", a);
    
    return EXIT_SUCCESS;
}
*/

/*int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    while(1)
    {
        if (a == b)
            break;
        
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    
    printf("%d\n", a);
    
    return EXIT_SUCCESS;
}
*/
