void reverseString(char* s, int n) {
    int begin=0,end=n-1;
    while(begin<n/2)
    {
        char temp=s[begin];
        s[begin]=s[end];
        s[end]=temp;
        begin++;
        end--;
    }
}