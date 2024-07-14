int isodd(char a)
{
    if(a=='1' || a=='3' || a=='5' || a=='7' | a=='9')
    return 1;
    return 0;
}
char* getSmallestString(char* s) {
    int cnt=0,i=0;
    while(cnt!=1 && s[i+1]!='\0')
    {
        int j=i+1;
         if(s[i]>s[j])
         {
            if((isodd(s[i]) && isodd(s[j])) || (isodd(s[i])==0 && isodd(s[j])==0))
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                cnt++;
            }
         }
        i++;
    }
    return s;
}