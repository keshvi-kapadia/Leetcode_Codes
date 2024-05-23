/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int maximum(int *a,int n)
 {
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
 }
bool* kidsWithCandies(int* a, int n, int ex, int* returnSize) {
    bool *p = malloc(n * sizeof(bool));

*returnSize=n;

    int max=maximum(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",max);
        if(a[i]+ex>=max)
        p[i]=true;
        else p[i]=false;
    }

    return p;
}