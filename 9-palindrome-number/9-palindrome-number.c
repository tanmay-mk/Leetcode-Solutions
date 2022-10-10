

bool isPalindrome(int x){

    long int result = 0;
    int remainder; 
    int temp_x = x;
    
    while (x>0)
    {
        remainder = x%10;
        result = ((result*10) + remainder);
        x /= 10;
    }
    
    if (result == temp_x)
    {
        return true;
    }
    else
    {
        return false;
    }
}