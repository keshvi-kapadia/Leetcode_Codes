int minOperations(char** s, int n) {
    int cnt=0;
    int i=0;
    while(i<n)
    {
        if(strcmp(s[i],"../")==0)
        cnt--;
        else if(strcmp(s[i],"./")!=0)
        cnt++;
        i++;
        if(cnt<0)
        cnt=0;
    }
    return cnt;
}