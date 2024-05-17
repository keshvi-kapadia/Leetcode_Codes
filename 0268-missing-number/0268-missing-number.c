int missingNumber(int* nums, int n) {
    int i,j;
    for(i=0;i<n;i++)
    { for(j=i+1;j<n;j++)
        {if(nums[i]>nums[j])
         {nums[i]=nums[i]+nums[j];    
            nums[j]=nums[i]-nums[j];   
            nums[i]=nums[i]-nums[j];    }}}
    i=0;
    while(nums[i]==i){
        if(i+1<n)
        i++;
        else return i+1; }
 return i;
}