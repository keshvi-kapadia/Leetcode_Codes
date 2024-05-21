char* reverseVowels(char* s) {
    int low=0,high=strlen(s)-1;

    while(low<high)
    {
        if(s[low]=='a' || s[low]=='e' || s[low]=='i' || s[low]=='o'|| s[low]=='u' ||s[low]=='A' || s[low]=='E' || s[low]=='I' || s[low]=='O'|| s[low]=='U')
        {
              if(s[high]=='a' || s[high]=='e' || s[high]=='i' || s[high]=='o'|| s[high]=='u' ||s[high]=='A' || s[high]=='E' || s[high]=='I' || s[high]=='O'|| s[high]=='U')
              {
                char temp=s[low];
                s[low]=s[high];
                s[high]=temp;
                low++;
                high--;
              }
              else high--;
        }
        else low++;
    }
    return s;
}