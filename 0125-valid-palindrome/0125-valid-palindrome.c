bool isPalindrome(char* s) {

   int len=strlen(s),i=0,k=0;
   if(len==1)
   return true;
   char *p=(char *)malloc(len+1*sizeof(char));
   while(s[i]!='\0')
   {
        if(s[i]>='A' && s[i]<='Z')
        {
            p[k]=tolower(s[i]);
            k++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            p[k]=s[i];
            k++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            p[k]=s[i];
            k++;
        }
        i++;
    }
    if(k==0 || k==1)
    return true;
    p[k]='\0';
    i=0;
    len=strlen(p);
    int j=len-i-1;
    while(i<=j)
    {
        if(p[i]!=p[j])
        return false;
        i++;
        j--;
    }
   return true;
}