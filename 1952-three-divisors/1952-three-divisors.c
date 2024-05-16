bool isThree(int n) {
    int cnt=2,i=2;

    while(i<n)
    {
        if(n%i==0)
        cnt++;
        i++;
        if(cnt>3)
        return false;
    }
    if(cnt==3)
    return true;
    else return false;
}