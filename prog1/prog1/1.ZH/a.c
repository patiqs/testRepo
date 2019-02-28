char foo(char *s)
{
  char min='Z';
  int i;
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]<min)
      min=s[i];

  }
  return min;

}
