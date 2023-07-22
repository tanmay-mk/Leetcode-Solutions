bool isLeap(int year)
{
    if (year % 100 == 0)
    {
        return (year % 400 == 0);
    }
    return (year % 4 == 0);
}

char * dayOfTheWeek(int day, int month, int year){

    char *weekday[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    int numDays=0; 
    for(int yr = 1971; yr < year; yr++)
    {
        numDays += isLeap(yr)? 366 : 365; 
    }
    
    for(int m = 1; m<month; m++)
    {
        switch (m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                numDays += 31; 
            break; 
            
            case 2: 
                numDays += isLeap(year)? 29 : 28; 
            break;
                
            default: 
                numDays += 30;
            break;
        }
    }
    
    numDays += day; 
    
    return weekday[(numDays + 4) % 7];
}