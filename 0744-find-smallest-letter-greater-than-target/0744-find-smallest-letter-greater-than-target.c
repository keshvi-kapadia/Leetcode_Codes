char nextGreatestLetter(char* a, int n, char target) {
    int i=0,cnt=0;
    char ans='z';
    while(i<n)
    {
        if(a[i]>target && a[i]<=ans)
        {
            ans=a[i];
            cnt++;
        }
        i++;
    }
    if(cnt!=0)
    return ans;
    else return a[0];
}