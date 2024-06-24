int findDuplicate(int* a, int n) {
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        temp[a[i]-1]++;
    }
    for(int i=0;i<n;i++)
    {
        if(temp[i]>1)
        return i+1;
    }
    return 0;
}