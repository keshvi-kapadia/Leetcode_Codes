int maximumCount(int* a, int n) {
    int neg=0,pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
            if(a[i]<0)
            neg++;
            else pos++;    
    }
    return neg>pos?neg:pos;
}