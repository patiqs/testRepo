#include <stdio.h>

int main()
{
    int kezd,ut[10000],db=0,min,max,y;
    scanf("%d",&kezd);
    min=kezd;
    max=kezd;
    //for(y=0;y<5;y++)
    while(scanf("%d",&ut[db])!= EOF)
    {
        //scanf("%d",&ut[db]);
        if (max < ut[db])
        {
            max=ut[db];
        }
        
        if(min > ut[db])
        {
            min = ut[db];
        }
            
        db++;
    }
    
    printf("%d %d\n",max-min,db*200);
    
    
    
    return 0;
}
