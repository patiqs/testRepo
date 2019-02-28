#include <stdio.h>
int main()
{
long double a=0,b=0,v=0;
char ch;
while(1)
{
scanf("%lf %lf",&a,&b);
scanf("%c",&ch);
if (ch == '/' ||ch == '*' ||ch == '-' ||ch == '+' )
break;
}
if (ch == '/' )
v = a / b;
else if	(ch == '*')
v = a * b;
else if	(ch == '-')
v = a - b;
else if	(ch == '+')
v = a + b;
//else 
//return 1;

if ( v > 0 )
printf("YES\n");
else 
printf("NO\n");
return 0;
}
