bool checkRecord(char * s){

    int len = strlen(s); 
    int absentCount = 0; int lateCount = 0; int presentCount = 0; 
    
    for(int i=0; i<len; i++)
    {
        if (s[i] == 'A')
        {
            absentCount++; 
            lateCount = 0; 
            if(absentCount >= 2)
            {
                return false; 
            }
        }
        else if (s[i] == 'L')
        {
            lateCount++; 
            if(lateCount == 3)
            {
                return false; 
            }
        }
        else
        {
            lateCount = 0; 
        }
    }
    return true; 
}