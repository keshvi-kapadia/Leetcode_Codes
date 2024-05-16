
int findFinalValue(int* a, int n, int final) {
    for(int i=0;i<n;i++)
    { if(a[i]==final)    {final*=2;                                                                          i=-1;}}
    return final;
}