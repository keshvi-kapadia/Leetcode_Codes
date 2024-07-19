
int* luckyNumbers (int** a, int m, int* column, int* returnSize) {
    int n=*column;
    int col[n];
    int row[m];

    for(int j=0;j<n;j++)
    {
        int i=0;
        int max=a[0][j];
        while(i<m)
        {
            if(a[i][j]>max)
            max=a[i][j];
            i++;
        }      
        printf("%d ",max);
        col[j]=max;
    }
    for(int i=0;i<m;i++)
    {
        int j=0;
        int min=a[i][0];
        while(j<n)
        {
            if(a[i][j]<min)
            min=a[i][j];
            j++;
        }
     printf("%d ",min);
        row[i]=min;
    }
    int k=0;
    int *p=(int *)malloc(m*sizeof(int));
   for(int i=0;i<m;i++)
   {
        for(int j=0;j<n;j++)
        {
            if(row[i]==col[j])
            p[k++]=row[i];
        }
    }
    *returnSize=k;
    return p;
}