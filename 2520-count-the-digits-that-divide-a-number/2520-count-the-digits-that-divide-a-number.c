int countDigits(int num){
    int count = 0; 
    int temp = num;
    while(temp > 0)
    {
        int rem = temp % 10; 
        
        if((num % rem) == 0)
        {
            count++;
        }
        temp = (temp/10);
    }
    return count;
}