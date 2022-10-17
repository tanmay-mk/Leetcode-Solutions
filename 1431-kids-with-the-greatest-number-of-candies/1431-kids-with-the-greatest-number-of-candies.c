

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){

    *returnSize = candiesSize; 
    
    bool *retArr = (bool *)malloc(sizeof(bool)*candiesSize);
    memset(retArr, 0, sizeof(bool)*candiesSize);
    
    for (int i = 0; i < candiesSize; i++)
    {
        retArr[i] = true;   //set it to true by default
        int thisKidsCandies = candies[i]+extraCandies;
        for(int j = 0; j<candiesSize; j++)
        {
            if (!(thisKidsCandies >= candies[j]))
            {
                retArr[i] = false;  //change to false
            }
        }
    }
    
    return retArr; 
}