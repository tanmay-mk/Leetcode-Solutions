int compare(int *a, int *b)
{
    return *a - *b; 
}

int lastStoneWeight(int* stones, int stonesSize){

    while(stonesSize > 1)
    {
        
        qsort(stones, stonesSize, sizeof(int), compare);
        
        stones[stonesSize-2] = stones[stonesSize-1] - stones[stonesSize-2];
        stonesSize--; 
    }
    return stones[0];
}