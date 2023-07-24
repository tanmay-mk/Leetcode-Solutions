int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration){

    int time = duration; 
    for(int i=1; i<timeSeriesSize; i++)
    {
        if(timeSeries[i] > (timeSeries[i-1]+duration-1))
        {
            //this attack is after Ashe came out of poisoned phase
            time += duration;
        }
        else
        {
            //this attack is before Ashe came out of poisoned phase
            //find out how much time has passed & subtract it from time
            time = time - duration + (timeSeries[i] - timeSeries[i-1]);
            time += duration;
        }
    }
    return time;     
}