int minOperations(char ** logs, int logsSize){

    int num_operations = 0; 
    
    for(int i=0; i<logsSize; i++)
    {
        if(strcmp(logs[i], "./") == 0)
        {
            //do nothing
        }
        else if(strcmp(logs[i], "../") == 0)
        {
            if(num_operations > 0)
            {
                num_operations--;
            }
            else
            {
                num_operations = 0; 
            }
        }
        else
        {
            num_operations++;
        }
    }
    return num_operations;
}