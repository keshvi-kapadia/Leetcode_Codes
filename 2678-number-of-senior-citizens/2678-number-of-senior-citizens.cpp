class Solution {
public:
    int countSeniors(vector<string>& a) {
        
    int n=a.size(),cnt=0,age;
    for(int i=0;i<n;i++)
    {
        age=(a[i][11]-'0')*10+(a[i][12]-'0');
        if(age>60)
        cnt++;
    }
    return cnt;
    }
};