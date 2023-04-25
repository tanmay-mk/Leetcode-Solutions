int compare(int *a, int *b)
{
    return (*a - *b);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    qsort(nums1, nums1Size, sizeof(int), compare); 
    qsort(nums2, nums2Size, sizeof(int), compare); 
    
    int commonElems = 0; int idx = 0; bool flag = false; 
    int *arr = (int *)malloc(sizeof(int)*commonElems);
    
    for(int i=0; i<nums1Size; i++)
    {
        flag = false; 
        for(int j=0; j<nums2Size; j++)
        {
            if(nums1[i] == nums2[j])
            {
                for(int k = 0; k<idx; k++)
                {
                    if(arr[k] == nums1[i])
                    {
                        flag = true; 
                        break; 
                    }
                }
                if(!flag)
                {
                    commonElems++;
                    arr = (int *)realloc(arr, (sizeof(int) * commonElems));
                    arr[idx] = nums1[i]; 
                    idx++;
                }
                break; 
            }
        }
    }
    
    *returnSize = commonElems;
    return arr; 
}