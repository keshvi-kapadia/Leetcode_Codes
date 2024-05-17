int findPeakElement(int* a, int n) {
    if(n==1 || a[0]>a[1])
    return 0;
    else if(a[n-2]<a[n-1])
    return n-1;
    else
    {
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            return i;
        }
    }
    return -1;
}