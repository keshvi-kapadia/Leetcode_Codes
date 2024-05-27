int specialArray(int* a, int n) {
    int i=0,cnt=0,x=0;
    while(x<=n)
    {
        i=0;
        while(i<n)
        {
         if(a[i]>=x)
           cnt++;
            i++;
        }
        if(cnt==x)
            return x;
        x++;
        cnt=0;
    }
    return -1;
}