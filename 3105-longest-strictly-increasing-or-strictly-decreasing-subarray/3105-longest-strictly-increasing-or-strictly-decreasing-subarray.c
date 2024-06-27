int longestMonotonicSubarray(int* a, int n) {
    int temp=1,cnt=1;
    int i=1;
    while(i<n)
    {
        if(a[i-1]>a[i])
        temp++;
        else
        temp=1;
        if(temp>cnt)
        cnt=temp;

        i++;
    }
    i=1,temp=1;
    while(i<n)
    {
        if(a[i-1]<a[i])
        temp++;
        else
        temp=1;
        
        if(temp>cnt)
        cnt=temp;
        i++;
    }
    return cnt;
}