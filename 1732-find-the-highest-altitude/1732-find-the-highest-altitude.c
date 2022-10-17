

int largestAltitude(int* gain, int gainSize){

    int netGainArrSize = gainSize+1;
    int *netGain = (int *)malloc(sizeof(int)*netGainArrSize);
    memset(netGain, 0, sizeof(int)*netGainArrSize);
    
    netGain[0] = 0;
    int maxGain = netGain[0];
    for(int i = 0; i<gainSize; i++)
    {
        netGain[i+1] = netGain[i]+gain[i];
        if(netGain[i+1] > maxGain)
        {
            maxGain = netGain[i+1];
        }
    }
    free(netGain);
    return maxGain;
}