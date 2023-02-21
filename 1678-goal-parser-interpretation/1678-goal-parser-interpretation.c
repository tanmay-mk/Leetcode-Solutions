

char * interpret(char * command){

    int len = strlen(command);
    
    int idx = 0; 
    
    for(int i=0; i<len; i++)
    {
        if(command[i] == 'G')
        {
            command[idx++] = 'G';
        }
        else if ((command[i] == '(') && (command[i+1] == 'a'))
        {
            command[idx++] = 'a'; 
            command[idx++] = 'l';
            i += 3;
        }
        else
        {
            command[idx++] = 'o'; 
            i++; 
        }       
    }
    command[idx] = '\0';
    return command;
}