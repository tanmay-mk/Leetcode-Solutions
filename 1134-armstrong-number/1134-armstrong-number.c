bool isArmstrong(int n){

    int temp = n;
    int numDigits=0;
    
    while(temp > 0)
    {
        numDigits++;
        temp /= 10; 
    }
    temp = n; 
    int arm = 0;
    while(n > 0)
    {
        int rem = n%10;
        arm += pow(rem, numDigits);
        n /= 10; 
    }
    
    if(arm == temp)
    {
        return true;
    }
    return false;
}