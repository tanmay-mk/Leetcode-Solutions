#define C_TO_F(c) ((c*1.80)+32.00)
#define C_TO_K(c) (c+273.15)

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){

    *returnSize = 2;
    double *temperature = (double *)malloc(sizeof(double)*2);
    
    temperature[0] = C_TO_K(celsius);
    temperature[1] = C_TO_F(celsius);
    
    return temperature; 
}