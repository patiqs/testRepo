#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		int ha=0,ot=0,be,x=0;
		printf("%d %d\n",ha,ot);
		while(scanf("%d",&be)!=0)
		{
			//if (x==0)
			//	printf("%d %d\n",ha,ot);
			
			x++;
			switch(be)
			{
				case 0:
					goto end;
				break;
				case -5:
					ot = 0;
				break;
				case -3:
					ha = 0;
				break;
				case 5:
					ot = 5;
				break;
				case 3:
					ha = 3;
				break;
				case 35:
					while(ha!=0&&ot!=5)
					{
						ha--;
						ot++;
					}
				break;
				case 53:
					while(ha!=3&&ot!=0)
					{
						ha++;
						ot--;
					}
				break;
			}
			printf("%d %d\n",ha,ot);
		}
		end:
		return 0;
}
