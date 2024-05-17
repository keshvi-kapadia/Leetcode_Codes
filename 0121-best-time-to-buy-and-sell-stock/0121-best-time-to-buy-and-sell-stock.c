int maxProfit(int* prices, int n) {
int min=prices[0],maxprofit=0,i,diff;
for(i=1;i<n;i++)
{if(min>prices[i])
min=prices[i];
if((diff=prices[i]-min)>maxprofit)
maxprofit=diff;}
return maxprofit;}