double myPow(double x,long long int n) {
    int temp;
    if(x==1 || (x==-1 && n%2==0) || n==0)
        return 1;
    else if(x==-1 && n%2!=0)
        return -1;
    if(n<0) {  
        temp=n;
        n=-n; }
    long int cnt=1;
    double result=x;
    while((cnt+cnt)<=n)  {
        cnt+=cnt;
        result*=result;  }
  while(cnt!=n){
     result*=x;
     cnt++; }
if(temp<0)
    result=1/result;
    return result;
}