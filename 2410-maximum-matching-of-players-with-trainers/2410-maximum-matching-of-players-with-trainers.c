int cmpfunc(int *a,int *b)
{
    return *a - *b;
}
int matchPlayersAndTrainers(int* a1, int n1, int* a2, int n2) {
    qsort(a1,n1,sizeof(int),cmpfunc);
    qsort(a2,n2,sizeof(int),cmpfunc);

    int i=0,j=0,cnt=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else j++;
    }
    return cnt;
}
