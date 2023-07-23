int compare(int *a, int *b)
{
    return *a - *b; 
}

int buyChoco(int* prices, int pricesSize, int money){

    qsort(prices, pricesSize, sizeof(int), compare);
    
    if(prices[0] + prices[1] <= money)
    {
        money = money - prices[0] - prices[1]; 
    }
    
    return money; 
}