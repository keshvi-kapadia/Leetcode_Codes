long long* sumOfThree(long long n, int* returnSize) {
    *returnSize=3;
    long long *p=(long long *)malloc(sizeof(long long)*3);
    if(n%3!=0)
    {
        *returnSize=0;
        return p;
    }

    p[1]=n/3;
    p[0]=p[1]-1;
    p[2]=p[1]+1;
    return p;
}