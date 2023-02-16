int totalMoney(int n){

    int sum = 0; 
    
    int prev_monday = 1; 
    int day = 0;
    int money = prev_monday; 
    
    for(int i=0; i<n; i++)
    {
        sum += money; 
        day++;
        money++;
        if (day == 7)
        {
            prev_monday++;
            day = 0; 
            money = prev_monday; 
        }
    }
    return sum; 
}