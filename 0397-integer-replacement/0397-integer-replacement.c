int iseven(unsigned int n)
{
    if(n%2==0)
    return 1;
    return 0;
}
int integerReplacement(unsigned int n) {
    int cnt=0;
    while(n!=1)
    {
        if(iseven(n)==1)
        n/=2;
        else if((n+1)%4==0 && n!=3)
        n+=1;
        else
        n-=1;
        cnt++;
    }
    return cnt;
}