#define LINE_WIDTH (100)

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfLines(int* widths, int widthsSize, char * s, int* returnSize){

    int retSize = 2; 
    *returnSize = retSize; 
    
    int *arr = (int *)malloc(sizeof(int)*retSize); 
    
    int line_number = 1; 
    int spaces_left = LINE_WIDTH; 
    int sLen = strlen(s);
    
    for(int i=0; i<sLen; i++)
    {
        int pixels = widths[s[i] - 'a'];
        if(pixels > spaces_left)
        {
            line_number++; 
            spaces_left = LINE_WIDTH - pixels; 
        }
        else
        {
            spaces_left -= pixels; 
        }
    }
    
    arr[0] = line_number; 
    arr[1] = LINE_WIDTH-spaces_left; 
    return arr;
}