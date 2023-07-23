typedef struct census
{
    int year; 
    int population; 
}census_t;

int compare(census_t *c1, census_t *c2)
{
    if(c1->population > c2->population)
    {
        return 1; 
    }
    else if(c1->population < c2->population)
    {
        return -1; 
    }
    else //c1->population == c2->population
    {
        if(c1->year > c2->year)
        {
            return -1; 
        }
        else if(c1->year < c2->year)
        {
            return 1; 
        }
    }
    return 0; 
}

int maximumPopulation(int** logs, int logsSize, int* logsColSize){

    census_t population[101] = {0}; 
    for(int i=1950; i<=2050; i++)
    {
        population[i-1950].year = i; 
    }
    
    for(int i=0; i<logsSize; i++)
    {
        int birth = logs[i][0]; 
        int death = logs[i][1]; 
        
        for(int j=birth; j<death; j++)
        {
            population[j - 1950].population++;
        }
    }
    
    qsort(&population, 101, sizeof(census_t), compare); 
    
    return population[100].year; 
}