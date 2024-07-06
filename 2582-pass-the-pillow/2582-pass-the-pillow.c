int passThePillow(int n, int time) {
    int ind=1,cnt=0,flag=0;
    while(cnt!=time)
    {
        if(ind==n)
        flag=1;
        else if(ind==1)
        flag=0;
        if(flag==0)
        {
            ind++;
        }
        else ind--;
        cnt++;
    }
    return ind;
}