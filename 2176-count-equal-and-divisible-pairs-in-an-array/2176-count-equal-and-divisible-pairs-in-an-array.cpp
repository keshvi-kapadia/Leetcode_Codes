class Solution {
public:
    int countPairs(vector<int>& a, int k) {
    int ans=0,i,j,n=a.size();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                 if(((i*j)%k)==0)
                     ans++;
            }
        }
    }
    return ans;
    }
};