int isprime(int n)
{
    if(n==1)
    return 0;
    int i=2;
    for(i=2;i<(n/2)+1;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int maximumPrimeDifference(int* a, int n) {
    int begin=0,end=n-1;
    while(true)
    {
        if(isprime(a[begin])==1)
        break;
        begin++;
    }
    while(true)
    {
        if(isprime(a[end])==1)
        break;
        end--;
    }
    return abs(end-begin);
}