/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	long long int low=1,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2,pick=guess(mid);
        if(pick==0)
        return mid;
        else if(pick==1)
        low=mid+1;
        else if(pick==-1)
        high=mid-1;
    }
    return 0;
}