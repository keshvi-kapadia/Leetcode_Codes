void sort(char *a)
{
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int longestPalindrome(char* s) {
    int ans=0,i=1,n=strlen(s);
    sort(s);
    while(i<n)
    {
        if(s[i-1]==s[i])
        {
            ans+=2;
            i+=2;
        }
        else i++;
    }
    if(ans==strlen(s))
    return ans;
    return ans+1;
}