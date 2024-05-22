int countNegatives(int** a, int m, int* col) {
    int n=*col,i=0,j,cnt=0;

    while(i<m)
    {
        j=n-1;
        while(j>=0)
        {
            if(a[i][j]<0)
            {
                cnt++;
                j--;
            }
            else break;
        }
        i++;
    }
    return cnt;
}