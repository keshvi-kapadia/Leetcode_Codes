int compare(const void *a,const void *b) {
    int *x = (int *) a;
    int *y = (int *) b;
    return *x - *y;
}
  int majorityElement(int* a, int n) {
    int i,j;

    qsort (a, n, sizeof(int), compare);

    int cnt=0,half=n/2;
    i=0,j=0;
    while(i<n)
    {
        while(j<n)
        {
            if(a[j]==a[i])
            {
            cnt++;
            j++;
             if(cnt>half)
                return a[i];
            }
            else break;
        }
        cnt=0;
        i++;
    }
    return 0;
}