int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}
int longestPalindrome(char* s) {
    int ans=0,i=1,n=strlen(s);
     qsort(s, n, sizeof(char), cmpfunc);
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