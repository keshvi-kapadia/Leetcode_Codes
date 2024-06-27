int findCenter(int** a, int m, int* col) {
    int n=*col;
    int size=100001;
    int t[size],cnt=0;
    for(int i=0;i<size;i++)
    {
        t[i]=0;
    }
    int max=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[a[i][j]]++;
            if(a[i][j]>max)
                max=a[i][j];
        }
    }
    for(int i=1;i<size;i++)
    {
        if(t[i]==max-1)
            return i;
    }
    return 0;
}