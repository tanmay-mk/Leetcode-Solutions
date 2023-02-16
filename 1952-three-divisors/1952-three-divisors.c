bool isThree(int n){

    int count = 0;
    
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            count++; 
        }
    }
    
    if (3 == count)
    {
        return true;
    }
    return false; 
}