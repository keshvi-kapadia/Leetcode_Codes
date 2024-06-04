int firstUniqChar(char* s) {
    int i=0,j,cnt=0;

    while(s[i]!='\0')
    {
        cnt=0;
        j=0;
        while(s[j]!='\0' && cnt<3)
        {
            if(s[i]==s[j])
            cnt++;
            j++;
        }
        if(cnt==1)
        return i;
        i++;
    }
    return -1;
}