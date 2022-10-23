

int addDigits(int temp_num){
    
    int result = 0;
    while(temp_num > 0)
    {
        int digit = temp_num % 10; 
        result += digit; 
        temp_num /= 10; 
        
        if (temp_num == 0 && result > 9)
        {
            temp_num = result; 
            result = 0;
        }
    }
    return result; 
}