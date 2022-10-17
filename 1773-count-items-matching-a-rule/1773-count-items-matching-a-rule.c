
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
    
    switch (rule)
    {
        case type:
            for(int i = 0; i<itemsSize; i++)
            {
                if(strcmp(ruleValue, items[i][type]) == 0)
                {
                    count++;
                }
            }
        break;
            
        case color:
            for(int i = 0; i<itemsSize; i++)
            {
                if(strcmp(ruleValue, items[i][color]) == 0)
                {
                    count++;
                }
            }
        break;
            
        case name:
            for(int i = 0; i<itemsSize; i++)
            {
                if(strcmp(ruleValue, items[i][name]) == 0)
                {
                    count++;
                }
            }
        break;
            
        default:
        break;
    }
    
    return count;
    
}