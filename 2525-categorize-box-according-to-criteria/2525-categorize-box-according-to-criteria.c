enum {
    heavy, 
    bulky, 
    neither, 
    both
};

#define ONE_HUNDRED     (100)
#define TEN_THOUSAND    (10000)
#define ONE_BILLION     (1000000000)

char * categorizeBox(int length, int width, int height, int mass){

    char *arr[4] = {"Heavy", "Bulky", "Neither", "Both"}; 
    bool isBulky = false, isHeavy = false; 
    
    if (mass >= ONE_HUNDRED)
    {
        isHeavy = true; 
    }
    if (length >= TEN_THOUSAND || width >= TEN_THOUSAND || height >= TEN_THOUSAND)
    {
        isBulky = true; 
    }

    if(isBulky == false)
    {
        long long volume=(long long)(length)*(long long)(width)*(long long)height;
        if (volume >= ONE_BILLION)
        {
            isBulky = true; 
        }
    }

    
    if (isBulky == true && isHeavy == true)    
    {
        return arr[both]; 
    }
    else if (isBulky == false && isHeavy == true)    
    {
        return arr[heavy]; 
    }
    else if (isBulky == true && isHeavy == false)    
    {
        return arr[bulky]; 
    }
    return arr[neither];    
}