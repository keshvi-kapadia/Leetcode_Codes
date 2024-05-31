/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* a, int n, int* returnSize) {
    int *p=(int *)malloc(2*sizeof(int));
    *returnSize=2;
    int i=0,pos=0;
    while(i<n)
    {
        int k=0,j=0;
        while(j<n)
        {
            if(a[i]==a[j])
            k++;
            j++;
        }
        if(k==1)
        p[pos++]=a[i];
        i++;
    }
    return p;
}