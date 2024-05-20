int lengthOfLastWord(char* s) {
    int len=strlen(s);
int i=len-1,cnt=0;

    while(s[i]==' ')
    i--;
    while(i>=0 && s[i]!=' ')
    {
        i--;
        cnt++;
    }
    return cnt;

}