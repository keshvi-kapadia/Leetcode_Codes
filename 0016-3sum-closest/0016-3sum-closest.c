int threeSumClosest(int* a, int n, int target) {
    int ans=a[0]+a[1]+a[2];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum=a[i]+a[j]+a[k];
                if(abs(sum-target)<abs(ans-target))
                ans=sum;
            }
        }
    }
    return ans;
}