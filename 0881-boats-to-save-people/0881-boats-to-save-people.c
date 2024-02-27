int compare(int *a, int *b)
{
    return *a - *b;
}

int numRescueBoats(int* people, int peopleSize, int limit) {
   
    int boats = 0; 
    
    qsort(people, peopleSize, sizeof(int), compare);
    
    int i=0, j=peopleSize-1; 
    
    while (i < j)
    {
        if ((people[i] + people [j]) > limit)
        {
            j--; 
        }
        else 
        {
            i++; j--;
        }
        boats++;
    }
    
    return ((i == j)? (boats+1):(boats));    
}