int findMaxConsecutiveOnes(int* a, int n) {
    int cnt=0,tmp=0,i=0;
    while(i<n)
    {
        if(i==n-1 && a[i]==1 && tmp>cnt)
            cnt=++tmp;
        else if(a[i]==1)
        tmp++;
        else tmp=0;
        if(tmp>cnt)
        cnt=tmp;
        i++;
    }
    return cnt;
}