int numIdenticalPairs(int* a, int n) {
    int i=0,j=i+1,cnt=0;

    while(i<n)
    {
        j=i+1;
        while(j<n)
        {
            if(a[i]==a[j])
            cnt++;
            j++;
        }
        i++;
    }
    return cnt;
}