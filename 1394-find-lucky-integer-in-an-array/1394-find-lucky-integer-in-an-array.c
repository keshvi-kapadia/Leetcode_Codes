int findLucky(int* a, int n) {
    int i=0,ans=-1;
    while(i<n)
    {
        int j=0,cnt=0;
        while(j<n)
        {
            if(a[i]==a[j])
                cnt++;
            j++;
        }
        if(cnt==a[i] && cnt>ans)
            ans=cnt;
        i++;
    }
    return ans;
}