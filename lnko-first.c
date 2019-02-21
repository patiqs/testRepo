#include <stdio.h>
#include <stdlib.h>

int main()
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
