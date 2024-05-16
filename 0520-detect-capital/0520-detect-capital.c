int iscapital(char s)
{
        if(s<'A' || s>'Z')
        return 0;
    return 1;
}
int issmall(char s)
{
        if(s<'a' || s>'z')
        return 0;
    return 1;
}
bool detectCapitalUse(char* s) {
    if(issmall(s[0])==1)
    {
        while(*s!='\0')
        {
            if(issmall(*s)==0)
            return false;
            s++;        
        }
        return true;
    }
    else
    {
        if(iscapital(s[1])==1)
        {
            while(*s!='\0')
            {
                if(iscapital(*s)==0)
                return false;
                s++;        
            }
            return true;
        }
        else
        {
            int len=strlen(s);
            for(int i=2;i<len;i++)
            {
                if(issmall(s[i])==0)
                return false;
            }
            return true;
        }
    }
    return true;
}