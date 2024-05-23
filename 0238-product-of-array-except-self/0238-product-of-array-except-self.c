/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* a, int n, int* returnSize) {
    *returnSize=n;
    int *p=(int *)malloc(n*sizeof(int));
    long long int i=1,j,product=1;

    while(i<n)
    {
        product*=a[i];
        i++;
    }
    p[0]=product;
    if(p[0]!=0)
    for(i=1;i<n;i++)
    {
        product=p[i-1] * a[i-1];  
        if(a[i]!=0)
        product=product/a[i]; 

        p[i]=product;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            product=1;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                product*=a[j];
            }
            p[i]=product;
        }
    }
     return p;
}