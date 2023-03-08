#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){

    *returnSize = n; 
    
    char **arr = (char**)malloc(sizeof(char*) * n);
    for(int i=0; i<n; i++)
    {
        arr[i] = (char *)malloc(sizeof(char)*9);
        memset(arr[i], 0, (sizeof(char)*9)); 
    }
    
    for(int i=1; i<=n; i++)
    {
        if(((i%3)==0) && ((i%5)==0))
        {
            strcpy(arr[i-1], "FizzBuzz");
        }
        else if(((i%3)==0))
        {
            strcpy(arr[i-1], "Fizz");
        }
        else if(((i%5)==0))
        {
            strcpy(arr[i-1], "Buzz");
        }
        else
        {
            sprintf(arr[i-1], "%d", i);
        }
    }  
    return arr; 
}