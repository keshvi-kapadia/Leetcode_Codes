/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* a, int n, int* returnSize) {
    *returnSize=2*n;
    int *p=(int *)malloc(2*n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        p[i]=a[i];
        p[i+n]=a[i];
    }
    return p;
}