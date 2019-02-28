int foo(int szam)
{
    int eredmeny=0,elozo;
    elozo=szam%2;
    szam=szam/2;
    while(szam!=0)
    {
        if(szam%2==1 && elozo==1)
            {eredmeny=1;break;}
        elozo=szam%2;
        szam=szam/2;

    }
    return eredmeny;
}
