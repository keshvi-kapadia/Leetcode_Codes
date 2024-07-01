class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n-2;i++)
        {
            if(a[i]%2!=0 && a[i+1]%2!=0 && a[i+2]%2!=0)
            return true;
        }
        return false;
    }
};