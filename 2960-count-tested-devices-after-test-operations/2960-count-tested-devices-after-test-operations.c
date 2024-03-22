int countTestedDevices(int* batteryPercentages, int batteryPercentagesSize) {
 
    int tested = 0; 
    
    for(int i=0; i<batteryPercentagesSize; i++)
    {
        if (batteryPercentages[i] > 0)
        {
            tested++;
            for(int j = i+1; j < batteryPercentagesSize; j++)
            {
                if (batteryPercentages[j] > 0)
                {
                    batteryPercentages[j]--;
                }
            }
        }
    }
    return tested; 
}