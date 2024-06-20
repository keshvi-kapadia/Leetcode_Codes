int isprime(int n)
{
    if(n<2 || n%2==0)
    return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
        return 0;
	}
	return 1;
}
int isPalindrome(int n)
{
    int temp=n,num=0;
    while(temp!=0)
    {
        num=(num*10)+(temp%10);
        temp/=10;
    }
    return num==n;
}
int primePalindrome(int n) 
{
    if(n==1 || n==2)
    return 2;
    long long int i;
    if(n%2==0)
    i=n+1;
    else i=n;
    while(i<200000000)
    {
        if(isPalindrome(i)==1)
        {
            if(isprime(i)==1)
            return i;
        }
        i+=2;
    }
    return 0;
}