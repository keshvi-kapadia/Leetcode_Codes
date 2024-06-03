int appendCharacters(char* s, char* t) {
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]==t[j])
        j++;
        i++;
    }
    return strlen(t)-j;
}