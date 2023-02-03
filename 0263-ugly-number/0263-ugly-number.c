int KeepDividing(int dividend, int divisor)
{
    while((dividend % divisor)==0)
    {
        dividend = (dividend/divisor);
    }
    return dividend; 
}

bool isUgly(int n){
    
    if (n <= 0)
    {
        return false;
    }

    int uglyFactors[] = {2,3,5};
    
    for(int i=0; i<3; i++)
    {
        n = KeepDividing(n, uglyFactors[i]);
    }
    if (n == 1)
    {
        return true;
    }
    return false;
}