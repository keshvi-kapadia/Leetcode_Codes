bool isPowerOfTwo(int n) {
    unsigned long long int i=1;
    if(n==1)
    return true;
    if(n<0)
        return false;
    while(i*2<=n)
    {
        i=i*2;
        if(i==n)
        return true;
    }
    return false;
    
}