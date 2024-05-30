char findTheDifference(char* s, char* t) {
    int i=0,sum=0;
      while(i<strlen(s))
      {
          sum-=s[i];
          i++;
      }
    i=0;
    while(i<strlen(t))
    {
        sum+=t[i];
        i++;
    }
    char ans=sum;
    return ans;
}