int numWaterBottles(int numBottles, int numExchange){

    int bottlesDrank = 0;
    int emptyBottles = 0; 
    
    while(numBottles > 0)
    {
        bottlesDrank += numBottles; 
        emptyBottles += numBottles; 
        numBottles = emptyBottles/numExchange; 
        emptyBottles -= numBottles*numExchange;
    }
    return bottlesDrank;
}