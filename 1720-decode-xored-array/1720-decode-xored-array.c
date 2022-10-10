

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize){

    /*Determine size of decoded array*/
    int decodedSize = encodedSize + 1;
    
    /*update size of decoded array*/
    *returnSize = decodedSize; 
    
    /*allocate memory to decoded array*/
    int *decoded = (int *)malloc(sizeof(int)*decodedSize);
    
    /*clear allocated memory before using*/
    memset(decoded, 0, decodedSize); 
    
    /*assign first element*/
    decoded[0] = first;
    
    /*decode rest of the array*/
    for (int i = 0; i<encodedSize; i++)
    {
        decoded[i+1] = encoded[i] ^ decoded[i];
    }

    return decoded;
}