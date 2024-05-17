int climbStairs(int n) {
    int i=0,j=1,k,cnt=0;
    while(cnt!=n)
    {k=i+j;
    i=j;
        j=k;
        cnt++; }
    return k;

}