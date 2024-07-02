class Solution {
public:
    vector<int> intersect(vector<int>& a1, vector<int>& a2) {
        int n1=a1.size(),n2=a2.size();
        int a[1001],b[1001];
        for(int i=0;i<1001;i++)
            {
                a[i]=0;
                b[i]=0;
            }

        for(int i=0;i<n1;i++)
        a[a1[i]]++;
        for(int i=0;i<n2;i++)
        b[a2[i]]++;
        vector<int>ans;
        int k=0;
        for(int i=0;i<1001;i++)
        {
            if(a[i]>=1 && b[i]>=1)
            {
                ans.push_back(i);
                a[i]--;
                b[i]--;
                i--;
            }
        }
        return ans;
    }
};