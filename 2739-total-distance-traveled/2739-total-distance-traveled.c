int distanceTraveled(int mainTank, int additionalTank){

    int distance = 0; 
    
    while(mainTank > 0)
    {
        if(mainTank > 4)
        {
            distance += 50; 
            mainTank -= 5; 
            
            if(additionalTank > 0)
            {
                mainTank++;
                additionalTank--; 
            }
            
        }
        else
        {
            distance += (mainTank*10); 
            mainTank = 0; 
        }
    }
    return distance; 
}