int numWaterBottles(int b, int e) {
    int empty=b,ans=b;
    while(empty>=e)
    {
        empty-=e;
        ans+=1;
        empty+=1;
    }
    return ans;
}