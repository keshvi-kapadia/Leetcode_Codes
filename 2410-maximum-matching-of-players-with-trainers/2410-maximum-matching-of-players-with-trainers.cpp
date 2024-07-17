class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& a1, vector<int>& a2) {
        sort(a1.begin(), a1.end()); 
        sort(a2.begin(), a2.end()); 
        int n1=a1.size(),n2=a2.size();
        int i=0,j=0,cnt=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else j++;
    }
    return cnt;
    }
};