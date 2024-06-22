int cmpfunc (int * a, int * b) {
   return ( *a - *b );
}
int maximumGap(int* a, int n) {
    if(n<2)
    return 0;
    qsort(a,n,sizeof(int),cmpfunc);
    int ans=0,i;
    for(i=0;i<n-1;i++)
    {
        int diff=a[i+1]-a[i];
        if(diff>ans)
        ans=diff;
    }
    return ans;

}