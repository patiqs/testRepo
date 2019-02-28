#include <stdio.h>
#include <stdlib.h>
int main()
{
float a=0,b=0,v=0;
char ch;
scanf("%f %f %c",&a,&b,&ch);
if (ch == '/')v = a / b;
else if	(ch == '*')v = a * b;
else if	(ch == '-')v = a - b;
else if	(ch == '+')v = a + b;
//printf("%f %f %f %c",a,b,v,ch);
if ( v > 0 )printf("YES\n");
else printf("NO\n");
return EXIT_SUCCESS;
}
