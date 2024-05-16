bool checkString(char* s) {
    int i=0;
    while(s[i]!='b')
    {
        if(s[i]!='\0')
        i++;
        else break;
    }
    while(s[i]!='\0')
    {
        if(s[i]=='a')
        return false;
        i++;
    }
    return true;
}