int foo(char *ch)
{
    int veg=0,x,meret,db=1;
    meret=strlen(ch);
    for(x=0;x<meret;x++)
    {
        
        if(ch[x]==ch[x+1])
        {
            db++;
        }
        else
        {
            db=1;
        }
        if(veg < db)
        {
            veg=db;
        }
        
    }
    
    return veg;
    
}
