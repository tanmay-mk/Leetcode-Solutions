void DigitProdSum(int num, int *prod, int *sum)
{
    if(num < 10)
    {
        *prod = num; 
        *sum = num;
    }
    int product = 1; 
    int summation = 0;
    while(num > 0)
    {
        int rem = (num % 10);
        product *= rem; 
        summation += rem; 
        num = (num / 10);
    } 
    *prod = product; 
    *sum = summation; 
}

int subtractProductAndSum(int n){
    
    int prod = 0, sum = 0;
    DigitProdSum(n, &prod, &sum);
    
    return (prod - sum);
}