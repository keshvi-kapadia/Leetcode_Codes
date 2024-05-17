bool checkIfExist(int* a, int n) {
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            if(i!=j && a[j]==a[i]*2)
                return true;
            j++;
        }
        i++;
    }
    return false;
}