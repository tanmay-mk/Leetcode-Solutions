
int maxNum (int *arr, int arrSize)
{
    int max = arr[0];
    
    for(int i=0; i<arrSize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max; 
}


int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){

    int numCustomers = accountsSize;
    int numAccounts = *accountsColSize; 
    
    int *wealth = (int *)malloc(sizeof(int)*numCustomers);
    memset(wealth, 0, sizeof(int)*numCustomers);
    
    for (int i = 0; i < numCustomers; i++)
    {
        int sum = 0;
        for(int j = 0; j<numAccounts; j++)
        {
            sum += accounts[i][j];
        }
        wealth[i] = sum;
    }
    
    int max = maxNum(wealth, numCustomers);
    
    free(wealth);
    
    return max;
}