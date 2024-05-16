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
int buyChoco(int* a, int n, int money){
    sort(a,n);
    int ans=money-(a[0]+a[1]);

    if(ans>=0)
    return ans;
    else return money;
}