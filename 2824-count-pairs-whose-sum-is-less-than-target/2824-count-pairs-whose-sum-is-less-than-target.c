int countPairs(int* a, int n, int target){
int i=0,cnt=0;
    while(i<n)
    {
        int j=i+1;
        while(j<n)
        {
           if(a[i] + a[j] < target)
               cnt++;
            j++;
        }
        i++;
    }
    return cnt;
}