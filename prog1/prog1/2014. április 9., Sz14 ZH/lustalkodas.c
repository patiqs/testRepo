#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char *token, sor[210], jelen[5];
float ertek,maximum;

    while(fgets(sor, 210, stdin)!=NULL)
    {
    token = strtok (sor, ";");

    maximum=atof(token);
    strcpy(jelen, token);

    while (token =strtok(NULL,";"))
      {
       ertek=atof(token);

       if(ertek>maximum)
        {
            strcpy(jelen, token);
            maximum=ertek;
        }

        }
    printf("%.2f\n",maximum);
}
return 0;
}