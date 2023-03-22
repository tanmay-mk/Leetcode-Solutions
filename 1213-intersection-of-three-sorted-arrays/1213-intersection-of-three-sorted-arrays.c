#define MIN(a,b,c) ((a < b)? ((a < c)? a : c) : ((b < c)? b : c))

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* arraysIntersection(int* arr1, int arr1Size, int* arr2, int arr2Size, int* arr3, int arr3Size, int* returnSize){
    
    int nums = 0; 
    int idx = 0; 
    int *arr = (int *)malloc(sizeof(int)*nums);
    int minSize = MIN(arr1Size, arr2Size, arr3Size);
    bool found1 = false, found2 = false;
    
    if(minSize == arr1Size)
    {
        for(int i=0; i<arr1Size; i++)
        {
            found1 = false; found2 = false; 
            for(int j=0; j<arr2Size; j++)
            {
                if(arr1[i] == arr2[j])
                {
                    found1 = true; 
                }
            }
            
            for(int j=0; j<arr3Size; j++)
            {
                if(arr1[i] == arr3[j])
                {
                    found2 = true; 
                }
            }        
            if(found1 == true && found2 == true)
            {
                nums++; 
                arr = (int *)realloc(arr, sizeof(int)*nums);
                arr[idx++] = arr1[i];
            }
        }
    }
    else if(minSize == arr2Size)
    {
        for(int i=0; i<arr2Size; i++)
        {
            found1 = false; found2 = false; 
            for(int j=0; j<arr1Size; j++)
            {
                if(arr2[i] == arr1[j])
                {
                    found1 = true; 
                }
            }
            
            for(int j=0; j<arr3Size; j++)
            {
                if(arr2[i] == arr3[j])
                {
                    found2 = true; 
                }
            }        
            if(found1 == true && found2 == true)
            {
                nums++; 
                arr = (int *)realloc(arr, sizeof(int)*nums);
                arr[idx++] = arr2[i];
            }
        }
    }
    else 
    {
        for(int i=0; i<arr3Size; i++)
        {
            found1 = false; found2 = false; 
            for(int j=0; j<arr1Size; j++)
            {
                if(arr3[i] == arr1[j])
                {
                    found1 = true; 
                }
            }
            
            for(int j=0; j<arr2Size; j++)
            {
                if(arr3[i] == arr2[j])
                {
                    found2 = true; 
                }
            }        
            if(found1 == true && found2 == true)
            {
                nums++; 
                arr = (int *)realloc(arr, sizeof(int)*nums);
                arr[idx++] = arr3[i];
            }
        }
    }
    
    *returnSize = nums; 
    
    return arr; 
}