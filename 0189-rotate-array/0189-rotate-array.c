void rotate(int* a, int n, int k) {
    int i=0,*p,full=0;
    if(n>k)
    {
        p=(int *)malloc((n-k)*sizeof(int));

        for(i=0;i<(n-k);i++)
        {
            p[i]=a[i];
        }

        for(i=n-k;i<n;i++)
        {
            a[full]=a[i];
            full++;
        }
        i=0;
        while(full<n)
        {
            a[full]=p[i];
            i++;
            full++;
        }
    }
    else
    {
        int i,temp,cnt=0;

        while(k!=cnt)
        {
            temp=a[n-1];
            for(i=n-2;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=temp;
           cnt++;
        }
    }
    
    
}