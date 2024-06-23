int cmpfunc(int *a,int *b)
{
    return *a-*b;
}
double min(double *a,int n)
{
    double min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
double minimumAverage(int* a, int n) {
    qsort(a,n,sizeof(int),cmpfunc);
    double avg[n/2];
    int k=0,i;

    for(i=0;i<n/2;i++)
    {
        avg[k]=(double)(a[i]+a[n-i-1])/2;
        k++;
    }
    return min(avg,n/2);
}