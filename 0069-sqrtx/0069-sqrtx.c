unsigned int mySqrt(unsigned int x) {
    if(x==0)
    return 0;
    else if(x==1)
     return 1;
    else
    {
         unsigned int i=2;
         while(i<=x)
        {
            int a=i*i;
        if(a==x)
        {
            break;
        }
            else if(a>x)
        {
            i--;
            break;
        }
            i++;
        }
    return i;
    }

}