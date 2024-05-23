
int* twoSum(int* a, int n, int target, int* returnSize) {
    *returnSize=2;
    int *p=(int*)malloc(2*sizeof(int));
    int begin=0,end=n-1;

    while(begin<end)
    {
        if(target==a[begin]+a[end])
        {
            p[0]=begin+1;
            p[1]=end+1;
            break;
        }
        else if(target>a[begin]+a[end])
        begin++;
        else end--;
    }

    return p;
}