int searchInsert(int* a, int n, int target) {
if(target<=a[0])
return 0;
else if(target>a[n-1])
return n;
int i=0;
while(i<n-1){
    if(target>a[i] && target<=a[i+1])
    return i+1;
    i++;}
return -1;}