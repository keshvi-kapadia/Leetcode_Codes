int uniquedigits(int *arr,int n)
{
    int i,j,k=0;
     int unique_digits[n];

  for (i = 0; i < n; i++) {
    unique_digits[i] = -1;
  }

  // Find the unique digits in the array
  k = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < k; j++) {
      if (arr[i] == unique_digits[j]) {
        break;
      }
    }
    if (j == k) {
      unique_digits[k] = arr[i];
      k++;
    }
  }
  printf("%d",k);
  return k;
}
bool increasingTriplet(int* a, int n) {
if(uniquedigits(a,n)<3)
return false;
   int i=0,j,k;
   while(i<n-2)
   {
        j=i+1;
        while(j<n-1)
        {
            if(a[i]<a[j])
            {
                k=j+1;
                while(k<n)
                {
                    if(a[j]<a[k])
                    return true;
                    k++;
                }
            }
            j++;
         }
         i++;
    }
   return false;
}