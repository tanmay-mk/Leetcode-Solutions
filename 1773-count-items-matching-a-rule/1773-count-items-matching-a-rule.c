
typedef enum ruleName {
    none = -1,
    type = 0, 
    color = 1, 
    name = 2
}rule_t;

int countMatches(char *** items, int itemsSize, int* itemsColSize, char * ruleKey, char * ruleValue){

    rule_t rule = none; 
    int count=0;

    if(strcmp(ruleKey, "type") == 0)
    {
        rule = type;
    }
    else if(strcmp(ruleKey, "color") == 0)
    {
        rule = color;
    }
    else
    {
        rule = name;
    }
    
    for(int i = 0; i<itemsSize; i++)
    {
        if(strcmp(ruleValue, items[i][rule]) == 0)
        {
            count++;
        }
    }
   
    return count;
    
}