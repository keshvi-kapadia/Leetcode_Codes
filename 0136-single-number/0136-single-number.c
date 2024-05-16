void sort(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int singleNumber(int* a, int n) {
    sort(a,n);
    int i=1,sum=a[0];
    while(i<n)
    {
        if(i%2==0)
            sum+=a[i];
        else sum-=a[i];
        i++;
    }
    return sum;
}