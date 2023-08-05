int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){

    int GoodEmployees = 0; 
    
    for(int i=0; i<hoursSize; i++)
    {
        if(hours[i] >= target)
        {
            GoodEmployees++;
        }
    }
    
    return GoodEmployees; 
}