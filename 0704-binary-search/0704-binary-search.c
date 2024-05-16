int search(int* a, int n, int target) {
    int low=0,high=n-1;
    if(a[n-1]<target || a[0]>target)
    return -1;
    while(low<=high)
    {
        int mid=(low+high)/2;;
        if(a[mid]==target)
        return mid;
        else if(a[mid]>target)
        high=mid-1;
        else low=mid+1;
    }
    return -1;
}