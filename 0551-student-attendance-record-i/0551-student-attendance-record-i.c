bool checkRecord(char* s) {
    int i=0,late=0,abs=0;

    while(s[i]!='\0')
    {
        if(s[i]=='A')
        abs++;
        if(s[i]=='L')
        late++;
        else late=0;

        if(late==3 || abs==2)
        return false;
        i++;
    }
    return true;
}