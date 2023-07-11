bool isFascinating(int n){
        
    int numbers[10] = {0}; 
        
    int arr[3] = {n, 2*n, 3*n};

    int idx = 0; 
    while(idx < 3)
    {
        while (arr[idx] > 0)
        {
            int rem = arr[idx] % 10; 
            if ( rem == 0 || numbers[rem] != 0)
            {
                return false; 
            }
            else
            {
                numbers[rem]++; 
            }
            arr[idx] /= 10;
        }
        idx++; 
    }
    return true; 
    
}