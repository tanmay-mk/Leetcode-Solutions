
enum {
    none = 0,       //no operation
    pre_plus,       //++x
    post_plus,      //x++
    pre_minus,      //--x
    post_minus      //x--
};

int finalValueAfterOperations(char ** operations, int operationsSize){

    int operation = none; 
    int x = 0;
    
    for (int i = 0; i < operationsSize; i++)
    {
        /*determine the operation*/
        if (strcmp(operations[i], "++X") == 0)
        {
            operation = pre_plus;
        }
        else if ((strcmp(operations[i], "X++") == 0))
        {
            operation = post_plus;
        }
        else if ((strcmp(operations[i], "--X") == 0))
        {
            operation = pre_minus;
        }
        else
        {
            operation = post_minus; 
        }
        
        /*Perform operation*/
        switch (operation)
        {
            case pre_plus:
            case post_plus:
                x++; 
            break;
                
            case pre_minus:
            case post_minus:
                x--; 
            break;
                
            default:
            break; 
        }
    } 
    
    return x; 
}