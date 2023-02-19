int commonFactors(int a, int b){

    int count = 0;
    
    int min = (a < b)? a : b;
    
    for(int i=1; i<=min; i++)
    {
        if (
                ((a % i) == 0) &&
                ((b % i) == 0)
            )
        {
            count++;
        }
    }
    return count;
}