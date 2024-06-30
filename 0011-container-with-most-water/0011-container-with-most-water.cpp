class Solution {
public:
    int maxArea(vector<int>& a) {
        int begin=0,end=a.size() - 1,ans=0;
    while(begin<end)
    {
        int h,w=end-begin;
        if(a[begin]>a[end])
        h=a[end];
        else
        h=a[begin];
        int temp=h*w;
        if(temp>ans)
        ans=temp;
        if(a[begin]<=a[end])
        begin++;
        else end--;
    }
    return ans;
    }
};