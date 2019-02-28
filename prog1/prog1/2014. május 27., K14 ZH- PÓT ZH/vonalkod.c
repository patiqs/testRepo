#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int lastdigit(char *s)
{
  int osszeg,hossz,i,vissza;
  int szam;
  char szam1[1];
  
  hossz=strlen(s);
  osszeg=0;
  for(i=0;i<hossz;i=i+1)
  {
	if((i+1)%2==0)
	{
		if(s[i]=='0') osszeg=osszeg;
		if(s[i]=='1') osszeg=osszeg+3;
		if(s[i]=='2') osszeg=osszeg+6;
		if(s[i]=='3') osszeg=osszeg+9;
		if(s[i]=='4') osszeg=osszeg+12;
		if(s[i]=='5') osszeg=osszeg+15;
		if(s[i]=='6') osszeg=osszeg+18; 
		if(s[i]=='7') osszeg=osszeg+21;
		if(s[i]=='8') osszeg=osszeg+24;
		if(s[i]=='9') osszeg=osszeg+27;
	}	
	if((i+1)%2==1)
	{	if(s[i]=='0') osszeg=osszeg;
		if(s[i]=='1') osszeg=osszeg+1;
		if(s[i]=='2') osszeg=osszeg+2;
		if(s[i]=='3') osszeg=osszeg+3;
		if(s[i]=='4') osszeg=osszeg+4;
		if(s[i]=='5') osszeg=osszeg+5;
		if(s[i]=='6') osszeg=osszeg+6; 
		if(s[i]=='7') osszeg=osszeg+7;
		if(s[i]=='8') osszeg=osszeg+8;
		if(s[i]=='9') osszeg=osszeg+9;
	}
  }
	if(osszeg%10==0){vissza=0;
			return vissza;
			}
	 else 
	{
	if(osszeg%10==1) vissza=osszeg+9-osszeg;
	if(osszeg%10==2) vissza=osszeg+8-osszeg;
	if(osszeg%10==3) vissza=osszeg+7-osszeg;
	if(osszeg%10==4) vissza=osszeg+6-osszeg;
	if(osszeg%10==5) vissza=osszeg+5-osszeg;
	if(osszeg%10==6) vissza=osszeg+4-osszeg;
	if(osszeg%10==7) vissza=osszeg+3-osszeg;
	if(osszeg%10==8) vissza=osszeg+2-osszeg;
	if(osszeg%10==9) vissza=osszeg+1-osszeg;


	}
return vissza;
}