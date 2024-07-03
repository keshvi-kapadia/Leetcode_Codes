int cmpfunc(int *a,int *b){
return *a - *b;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}
int minDifference(int* a, int n) {
    if(n<5)
    return 0;
    qsort(a,n,sizeof(int),cmpfunc);
    int ans=a[n-1]-a[0],k=n-3;
    for(int i=k-1;i<n;i++){
    ans = min(ans, a[i] - a[i - k + 1]);
    }
    return ans;
}