char repeatedCharacter(char* s) {
    int a[27];

    for(int i=0;i<27;i++)
    {
        a[i]=0;
    }
    int i=0;
    while(s[i]!='\0')
    {
        if(a[s[i]-'a']==1)
        return s[i];
        else
        a[s[i]-'a']++;

        i++;
    }
return 'z';   
}