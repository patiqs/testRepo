int foo(int be)
{
    int ki=0,seg;
    seg=be;
    while(seg!=0)
    {
        if(seg%2==1)
        {
            ki++;
        }
        seg= seg /2;
    }
    
    return ki;
}
