void reverseString(char* s, int n) {
    char *begin=&s[0],*end=&s[n-1];
    while(begin<end)
    {
        char temp=*begin;
        *begin=*end;
        *end=temp;
        begin++;
        end--;
    }   
}
