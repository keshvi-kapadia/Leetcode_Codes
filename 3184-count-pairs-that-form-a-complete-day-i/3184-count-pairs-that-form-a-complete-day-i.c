int countCompleteDayPairs(int* hours, int n) {
    int i,j,ans=0;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((hours[i]+hours[j])%24==0)
               ans++;
        }
    }
    return ans;
        
}