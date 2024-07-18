/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* a1, int n1, int* a2, int n2, int* returnSize) {
    int a[1001];
    for(int i=1;i<1001;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n1;i++)
    {
        if(a[a1[i]]==0)
        a[a1[i]]++;
    }
    for(int i=0;i<n2;i++)
    {
        if(a[a2[i]]==1)
        a[a2[i]]++;
    }

    int *p=(int *)malloc(1000*sizeof(int));
    int k=0;

    for(int i=0;i<1001;i++)
    {
        if(a[i]==2)
        {
            p[k++]=i;
        }
    }
    *returnSize=k;
    return p;
}