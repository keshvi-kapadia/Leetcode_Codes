bool judgeSquareSum(int c) {
    long long int a=0,b=sqrt(c);
    while(a<=b)
    {
        if((a*a)+(b*b)==c)
        return true;
        else if((a*a)+(b*b)<c)
        a++;
        else b--;
    }
    return false;
}