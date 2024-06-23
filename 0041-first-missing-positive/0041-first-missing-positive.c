int max(int *a,int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int firstMissingPositive(int* a, int n) {
    if(n==1 && a[0]!=1)
    return 1;
    int maxv=max(a,n);
    if(maxv<0)
    return 1;
    if(maxv<2147483647)
    {
        int size=maxv+1;
        int i;
        int *temp=(int *)malloc(sizeof(int) * size);
        for(i=0;i<size;i++)
        {
            temp[i]=0;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                temp[a[i]]++;
            }
        }
        for(i=1;i<size;i++)
        {
            if(temp[i]==0 && i!=0)
                return i;
        }
    }
    else
        {
            int i=1;
            while(i<2147483647)
            {
                int j=0;
                while(j<n)
                {
                    if(a[j]==i)
                    break;
                    if(j==n-1)
                    return i;
                    j++;
                }
                i++;
            }
        }
    return maxv+1;
}