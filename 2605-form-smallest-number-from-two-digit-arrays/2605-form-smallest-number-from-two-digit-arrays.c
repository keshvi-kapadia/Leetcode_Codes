int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int min1 = 10;
    int min2 = 10;
    int min = 10;
    for(int i = 0; i<nums1Size; i++){
        for(int j = 0; j<nums2Size; j++){
            if(nums1[i] == nums2[j] && min > nums1[i]){
                min = nums1[i];
            }
        }
    }
    if(min < 10){
        return min;
    }
    for(int i = 0; i<nums1Size; i++){
        if(nums1[i] < min1){
            min1 = nums1[i];
        }
    }
    for(int i = 0; i<nums2Size; i++){
        if(nums2[i] < min2){
            min2 = nums2[i];
        }
    }
    if(min1 == min2){
        return min1;
    }
    if(min1 > min2){
        int ans = min2*10+min1;
        return ans;
    }

    int ans = min1*10+min2;
    return ans;
}