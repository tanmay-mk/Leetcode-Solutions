

int fib(int n){

    if(n == 0)
    {
        return 0; 
    }
    if ((n == 1) || (n == 2))
    {
        return 1; 
    }
    
    int num1 = 0; int num2 = 1; int num3 = num1+num2; 
    for(int i = 2; i < n; i++)
    {
        num1 = num2; 
        num2 = num3; 
        num3 = num1+num2;
    }
    return num3; 
}