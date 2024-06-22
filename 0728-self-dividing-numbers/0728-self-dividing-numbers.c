/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int isselfdivide(int n)
{
    int temp=n;
    while(temp!=0)
    {
        int digit=temp%10;
        if(digit==0)
        return 0;
        else if(n%digit!=0)
        return 0;
        else temp/=10;
    }
    return 1;
} 
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int size=right-left,k=0;
    int *p=(int *)malloc(size*sizeof(int));

    for(int i=left;i<=right;i++)
    {
        if(isselfdivide(i)==1)
        {
            p[k++]=i;
        }
    }
    *returnSize=k;
    return p;
}