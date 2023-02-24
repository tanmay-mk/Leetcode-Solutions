/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** cellsInRange(char * s, int* returnSize){

    char start = s[0]; 
    char end = s[3]; 
    int startNum = s[1] - '0';
    int endNum = s[4] - '0';
    int startChar = (int) start; 
    int endChar = (int) end; 
    bool flag = false; 
    
    int totalCells = ((end - start) + 1) * (endNum - startNum + 1);
    int idx = 0; 
    *returnSize = totalCells;
    
    char** arr;
    arr = (char *)malloc(sizeof(char*)*totalCells);
    for(int i=0; i<totalCells; i++)
    {
        arr[i] = (char *)malloc(sizeof(char)*3);
    }
    
    for(int i=startChar; i<=endChar; i++)
    {
        for(int j=startNum; j<=endNum; j++)
        {
            arr[idx][0] = (char)i; 
            arr[idx][1] = (char)(j+'0'); 
            arr[idx][2] = '\0'; 
            idx++;
            if(idx >= totalCells)
            {
                flag = true; 
                break; 
            }
        }
        if (flag == true)
        {
            break;
        }
    }         
    return arr; 
}