/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* a1, int n1, int* a2, int n2, int* returnSize) {
        int a[1001],b[1001];
        for(int i=0;i<1001;i++)
            {
                a[i]=0;
                b[i]=0;
            }

        for(int i=0;i<n1;i++)
        a[a1[i]]++;
        for(int i=0;i<n2;i++)
        b[a2[i]]++;
        int *ans=(int *)malloc(n1*sizeof(int));
        int k=0;
        for(int i=0;i<1001;i++)
        {
            if(a[i]>=1 && b[i]>=1)
            {
                ans[k++]=i;
                a[i]--;
                b[i]--;
                i--;
            }
        }
        *returnSize=k;
        return ans;
}