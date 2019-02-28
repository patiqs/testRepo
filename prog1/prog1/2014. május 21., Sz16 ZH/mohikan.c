int *mohican( char *t[], int s, int o )
{
  int *vissza,i,j,maxi,maxj;
  
  
  vissza=(int*)malloc(2*sizeof(int));
  
  for(i=0;i<s;i++)
  {
    for(j=0;j<o;j++)
      {
      if( (i==0 && j==0) || (strcmp(t[i*o+j],t[maxi*o+maxj] )>0))
      {
      maxi=i;
      maxj=j;
      
      }
     
    }	
  
  }
  vissza[0]=maxi;
  vissza[1]=maxj;
    
  return vissza;
}