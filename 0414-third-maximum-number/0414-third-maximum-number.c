void sort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int max(int *a,int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int thirdMax(int* a, int n) {
    if(n<3)
    return max(a,n);
    sort(a,n);
    int i=1,cnt=1;
    while(i<n)
    {
        if(a[i-1]!=a[i])
        cnt++;
        if(cnt==3)
        return a[i];
        i++;
    }
    return a[0];
}