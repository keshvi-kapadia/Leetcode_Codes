int reverse(long long int x){
    int flag=0;
    if(x>8463847412)
        return 0;
    if(x<0){
    flag=1;
    x=-(x);
    }

    long long int num=0;
    while(x!=0)
    {
        num*=10;
        num+=x%10;
        x/=10;
        if(num>2147483648)
        return 0;
    }
    if(flag==1)
    return -num;
    return num;

}