int sumOfTheDigitsOfHarshadNumber(int x) {
    int temp=x,sum=0; 
    while(temp!=0)
    {
        sum=sum+(temp%10);
        temp/=10;
    }
     if(x%sum==0)
      return sum;
    else return -1;

}