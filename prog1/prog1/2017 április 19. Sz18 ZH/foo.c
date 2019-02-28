int foo(int *t[],int n)
{
    int *db,dbi=0,i,volt=0,j;
    db=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        volt=0;
        for(j=0;j<dbi+1;j++)
        {
            if(t[i]==db[j])
                {volt=1; break;}

        }
        if(volt==0)
        {db[j-1]=t[i];dbi++;}

    }
    for(i=0;i<n;i++)
    if(t[i]==0) {dbi++;break;}
    return dbi;


}
