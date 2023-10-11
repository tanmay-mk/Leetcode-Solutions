int differenceOfSums(int n, int m) {
    
    int divisible = 0, non_divisibe = 0; 
    
    for(int i=1; i<=n; i++)
    {
        if ((i % m) == 0)
        {
            divisible += i;
        }
        else
        {
            non_divisibe += i;
        }
    }
    
    return (non_divisibe - divisible);
}