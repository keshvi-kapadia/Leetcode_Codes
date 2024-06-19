/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void sort(int *p,int n)
 {
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
 }
int* numberGame(int* a, int n, int* returnSize) {
    *returnSize=n;
    int *p,i,j;
    p=(int *)malloc(n*(sizeof(int)));
    for(i=0;i<n;i++)
    {
        p[i]=a[i];
    }
    sort(p,n);

    i=0;
    while(i<n)
    {
        int temp=p[i];
        p[i]=p[i+1];
        p[i+1]=temp;
        i=i+2;
    }

    return p;
}