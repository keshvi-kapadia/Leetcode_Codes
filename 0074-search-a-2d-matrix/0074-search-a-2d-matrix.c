bool searchMatrix(int** a, int m, int* size, int target) {
    int i=0,j=(*size)-1;
    if(target>=a[0][0] && target<=a[m-1][(*size)-1]) 
    {
         while(i<m && j>=0)
            {
                if(a[i][j]==target)
                return true;
                else if(a[i][j]<target)
                i++;
                else
                j--;
            }
    }                         
    return false;
}