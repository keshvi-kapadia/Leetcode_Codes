int singleNumber(int* a, int n) {
    if(n==1)
    return a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int i=1,cnt=1,temp;
    temp=a[0];

    while(i<n)
    {
        if(cnt==3)
        {
            cnt=0;
            temp=a[i];
        }
        if(temp==a[i])
        cnt++;
        else return temp;
        i++;
    }
    return a[n-1];
}