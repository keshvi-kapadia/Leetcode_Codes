int maxArea(int* a, int n) {
    int begin=0,end=n-1,ans=0;
    while(begin<end)
    {
        int h,w;
        w=end-begin;
        if(a[begin]>a[end])
        h=a[end];
        else
        h=a[begin];
        if(h*w>ans)
        ans=h*w;
        if(a[begin]<=a[end])
        begin++;
        else end--;
    }
    return ans;
}