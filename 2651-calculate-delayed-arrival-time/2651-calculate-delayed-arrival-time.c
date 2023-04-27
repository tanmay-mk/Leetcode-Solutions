int findDelayedArrivalTime(int arrivalTime, int delayedTime){

    while(delayedTime)
    {
        if(arrivalTime == 23)
        {
            arrivalTime = 0; 
        }
        else
        {
            arrivalTime++; 
        }
        delayedTime--; 
    }
    return arrivalTime;
}