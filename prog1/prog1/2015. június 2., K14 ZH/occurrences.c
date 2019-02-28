
int occurrences(char *s,char c, int a,int b)
{
    int i,db=0;
    for(i=0;i<strlen(s);i++)
        if(s[i]==c)
        db++;
        if(db>=a && db<=b)
    return 1;
    else return 0;

}

