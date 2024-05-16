/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int *p;
    p=(int *)malloc(2*sizeof(int));
    *returnSize=2;
    for(int i=0;i<n;i++)
    {
        int x=target - nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]==x)
                { 
                    p[0]=i;
                    p[1]=j;
                    break;
                }
            }
   }
    return p;
}