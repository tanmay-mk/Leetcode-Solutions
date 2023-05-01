int compare(int *a, int *b)
{
    return (*a - *b);
}

double average(int* salary, int salarySize){

    qsort(salary, salarySize, sizeof(int), compare);
    
    int sum = 0; 
    for(int i=1; i<salarySize - 1; i++)
    {
        sum += salary[i]; 
    }
    
    return (double)((double)sum / (salarySize - 2)); 
}