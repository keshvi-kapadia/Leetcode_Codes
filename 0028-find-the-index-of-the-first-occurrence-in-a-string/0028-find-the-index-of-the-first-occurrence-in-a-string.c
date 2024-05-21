int strStr(char* s, char* n) {
    int size=strlen(n),i=0,j=0,index=-1,start=0;
    while(s[i]!='\0')
    {
        if(s[i]==n[j])
        {
            j++;
            if(size==j)
            {
                index=i-size+1;
                break;
            }
        }
        else
        {
            if(j>0)
            i=i-j;
            j=0;
        }
        i++;
    }
    return index;
}