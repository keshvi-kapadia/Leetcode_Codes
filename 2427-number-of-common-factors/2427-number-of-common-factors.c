int commonFactors(int a, int b) {
    int cnt=1,i=2;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
            cnt++;
        i++;
    }
    return cnt;
}