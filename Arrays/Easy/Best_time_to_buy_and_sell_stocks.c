int max(a,b){
    if(a>=b)
        return a;
    else
        return b;
    }
int maxProfit(int* prices, int pricesSize){
    int low=prices[0],profit=0;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<low)
            low=prices[i];
        profit=max(prices[i]-low,profit);
            }
    return profit;
}