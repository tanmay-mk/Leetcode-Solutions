typedef struct numBits
{
    int value; 
    int bits; 
}numBits_t;

int countBits(int num)
{
    int count = 0; 
    while (num > 0)
    {
        if((num & 1) == 1)
        {
            count++; 
        }
        num = num >> 1; 
    }
    return count; 
}

//compare by bits
//returns 0 if same
//returns 1 if n1 > n2
//returns -1 if n1 < n2
int compare(numBits_t *n1, numBits_t *n2)
{
    if(n1->bits == n2->bits)
    {
        //num bits same, but value different, compare by value
        if(n1->value > n2->value)
        {
            return 1; 
        }
        if(n1->value < n2->value)
        {
            return -1; 
        }
        //same
        return 0; 
    }
    
    if(n1->bits > n2->bits)
    {
        return 1; 
    }
    
    //n2 > n1
    return -1;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortByBits(int* arr, int arrSize, int* returnSize){

    numBits_t *bitArr = (numBits_t *)malloc(sizeof(numBits_t)*arrSize);
    memset(bitArr, 0, (sizeof(numBits_t)*arrSize)); 
    
    int *retArr = (int *)malloc(sizeof(int)*arrSize);
    
    for(int i=0; i<arrSize; i++)
    {
        bitArr[i].value = arr[i]; 
        bitArr[i].bits = countBits(arr[i]);
    }
    qsort(bitArr, arrSize, sizeof(numBits_t), compare); 
    
    for(int i=0; i<arrSize; i++)
    {
        retArr[i] = bitArr[i].value; 
    }
    
    *returnSize = arrSize; 
    free(bitArr);
    return retArr; 
}