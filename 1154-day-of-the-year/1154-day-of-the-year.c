int dayOfYear(char * date){

    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leapdays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int year =  (1000 * (date[0] - '0')) +
                (100 * (date[1] - '0')) +
                (10 * (date[2] - '0')) + 
                (date[3] - '0');
    
    int month = (10 * (date[5] - '0')) + 
                (date[6] - '0');
    
    int day = (10 * (date[8] - '0')) + 
                (date[9] - '0');
    
    bool leap = false; 

    if  ( 
            (year % 4 == 0) && 
            ((year % 400 == 0) || (year % 100 != 0))
        )
    {
        leap = true; 
    }
    
    int result = 0; 
    for(int i=1; i<month; i++)
    {
        if(!leap)
        {
            result += days[i];
        }
        else
        {
            result += leapdays[i];
        }
    }
    
    return result+day; 
}