class Solution {
public:
    int countKDifference(vector<int>& a, int k) {
        int n=a.size(),i,j,ans=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])==k)
                ans++;
            }
        }
        return ans;
    }
};