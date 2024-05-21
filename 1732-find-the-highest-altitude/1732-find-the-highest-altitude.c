int largestAltitude(int* a, int n) {
    int ans=a[0],sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>ans)
        ans=sum;
    }
    if(ans>0)
    return ans;
    else return 0;
}