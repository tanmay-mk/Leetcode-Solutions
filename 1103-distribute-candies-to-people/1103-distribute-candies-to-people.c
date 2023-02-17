/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distributeCandies(int candies, int num_people, int* returnSize){

    int *arr = (int *)malloc(sizeof(int)*num_people);
    memset(arr, 0, (sizeof(int)*num_people));
    *returnSize = num_people; 
    int idx = 0; 
    int curr_candies = 1; 
    
    while(candies > 0)
    {
        arr[idx++] += curr_candies;
        candies -= curr_candies;
        curr_candies++;
        if (candies < curr_candies)
        {
            curr_candies = candies;
        }
        if (idx >= num_people)
        {
            idx = 0;
        }
    }
    return arr;
}