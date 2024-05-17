bool canMakeArithmeticProgression(int* a, int n) {
    int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    
    int diff=a[1]-a[0];
    i=1;
    while(i<n)
    {
        if(a[i-1]+diff!=a[i])
            return false;
        i++;
    }
    return true;
}