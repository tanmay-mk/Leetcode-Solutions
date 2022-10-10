

int xorOperation(int n, int start){
    
    /*define array of n integers*/
    int *arr = (int *)malloc(sizeof(int)*n);

    int retval = 0;
    
    /*populate the array*/
    for(int i = 0; i<n; i++)
    {
        arr[i] = start+(2*i);
    }
    
    /*get first element*/
    retval = arr[0];
    
    /*perform xor*/
    for(int i = 1; i<n; i++)
    {
        retval ^= arr[i];
    }
    
    free(arr);
    
    return retval;

}