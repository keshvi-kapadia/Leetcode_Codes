class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& a1, vector<int>& a2) {
        sort(a1.begin(), a1.end()); 
        sort(a2.begin(), a2.end()); 
        int i=0,j=0,cnt=0;
    while(i<a1.size() && j<a2.size())
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