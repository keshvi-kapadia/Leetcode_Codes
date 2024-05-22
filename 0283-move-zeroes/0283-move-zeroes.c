void moveZeroes(int* a, int n) {
    int i=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n;j++)
                a[j-1]=a[j];
            a[n-1]=0;
            n--;
            i--;
        }
        i++;
    }
}
