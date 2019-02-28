int foo(int *betom,int bedb)
{
int x,y,db=1;
//tomb[0]=1;
for(x=1;x<bedb;x++)
{
    
    //tomb[x]=x+1;
    for(y=x;y>0;y--)
    {
        if(betom[x] == betom[y-1])
        {
            //tomb[x]=y;
            db--;
            break;
        }
    }
    db++;
    
}

return db;
}
