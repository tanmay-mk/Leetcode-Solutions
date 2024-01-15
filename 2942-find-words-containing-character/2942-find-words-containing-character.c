/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    
    int count=0; 
    int *ans = (int *) malloc (sizeof(int)*count);
    
    for(int i=0; i<wordsSize; i++)
    {
        int len = strlen(words[i]);
        if(memchr(words[i], (int)x, len) != NULL)
        {
            count++;
            ans = realloc(ans, sizeof(int)*count);
            ans[count-1] = i;
        }
    }
    *returnSize = count;
    return ans;
}