

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize){

    *returnSize = pricesSize;
    int *discount = (int *)malloc(sizeof(int)*pricesSize);
    memset(discount, 0, (sizeof(int)*pricesSize)); 
    
    for(int i=0; i<pricesSize; i++)
    {
        int price = prices[i]; 
        for (int j = i+1; j<pricesSize; j++)
        {
            if (prices[j] <= prices[i])
            {
                price = prices[i] - prices[j];
                break;
            }
        }
        discount[i]=price;
    }
    return discount;   
}