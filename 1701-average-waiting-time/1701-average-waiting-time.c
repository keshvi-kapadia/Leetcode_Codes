double averageWaitingTime(int** a, int m, int* n) {
    unsigned long long int time=a[0][0];
    unsigned long long int wait=0;
    unsigned int i=0;
    while(i<m)
    {
        if(a[i][0]>time)
        {
            wait+=a[i][1];
            time=a[i][0]+a[i][1];
        }
        else
        {
            time+=a[i][1];
            wait+=time-a[i][0];
        }
        i++;
    }
    return (double)wait/m;
}