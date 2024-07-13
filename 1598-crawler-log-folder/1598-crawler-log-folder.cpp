class Solution {
public:
    int minOperations(vector<string>& s) {
    int cnt=0,n=s.size();
    int i=0;
    while(i<n)
    {
        if(s[i]=="../")
        cnt--;
        else if(s[i]!="./")
        cnt++;
        i++;
        if(cnt<0)
        cnt=0;
    }
    return cnt;
    }
};