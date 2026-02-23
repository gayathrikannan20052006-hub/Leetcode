int maxProfit(int* prices, int pricesSize) {
    int j=0;
    int min=INT_MAX;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else if(prices[i]- min>j){
            j=prices[i]-min;
        }
    }
    return j;
}
