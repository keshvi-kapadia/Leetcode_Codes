bool isPowerOfThree(int n) {
    unsigned long long int i=1;
    if(n==1)
    return true;
    if(n<0)
        return false;
    while(i*3<=n)
    {
        i=i*3;
        if(i==n)
        return true;
    }
    return false;
}