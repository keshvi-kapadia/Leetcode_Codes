/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* a, int n, int target, int* returnSize) {
    *returnSize=2;
    int x=0;
    int *p=(int *)malloc(2*sizeof(int));
    p[0]=-1;
    p[1]=-1;

    for(int i=0;i<n;i++)
    {
        if(target==a[i])
        {
            p[x]=i;
            if(x!=1)
            x++;
        }
    }

    if(p[0]!=-1 && p[1]==-1)
    p[1]=p[0];

    return p;
}