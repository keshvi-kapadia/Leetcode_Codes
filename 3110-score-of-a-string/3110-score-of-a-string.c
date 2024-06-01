int scoreOfString(char* s) {
    int i=1,sum=0;
    while(i<strlen(s))
    {
        sum+=abs(s[i-1]-s[i]);
        i++;
    }
    return sum;
}