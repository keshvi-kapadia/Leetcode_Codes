int removeDuplicates(int* a, int n) {
    int i,j=0,ans=1;

   for (int i = 1; i < n; i++) {
            if (a[i] != a[j]) {
                j++;
                a[j] = a[i];
                ans++;
            }
        }
    return ans;
}