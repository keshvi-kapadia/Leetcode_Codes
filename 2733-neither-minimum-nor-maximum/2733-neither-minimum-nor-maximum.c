int findNonMinOrMax(int* a, int n)
 {
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=min && a[i]!=max)
        return a[i];
    }
    return -1;
}