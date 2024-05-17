int arrangeCoins(int n) {
    int i=1;
    while(n-i>=0){
     n-=i;
    i++;}
   return i-1;
}