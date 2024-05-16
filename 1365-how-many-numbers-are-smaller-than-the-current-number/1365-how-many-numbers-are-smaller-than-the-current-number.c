int* smallerNumbersThanCurrent(int* a, int n, int* returnSize) {
    *returnSize=n;
    int *p,i=0,j;
    p=(int *)malloc(n*sizeof(int));
    while(i<n)
    {
        p[i]=0;
        for(j=0;j<n;j++)
        {
            if(j != i  && a[j] < a[i])
                p[i]++;
        }
        i++;
    }
    return p;
}