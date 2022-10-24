class Solution {
public:
    
    int retInteger(string numVal)
    {
        int result = 0;
        int strSize = numVal.size();
        bool flag = false;
        if (numVal[0]=='-')
        {
            flag = true;
        }
        
        if (!flag)
        {
            for(int i = 0; i<strSize; i++)
            {
                int digit = numVal[i] - '0';
                result = (10*result)+digit;
            }
        }
        else
        {
            for(int i = 1; i<strSize; i++)
            {
                int digit = numVal[i] - '0';
                result = (10*result)+digit;
            }
            
            result *= -1;
        }
        return result; 
    }
    
    int calPoints(vector<string>& operations) {
        
        vector<int>record;
        int operationsSize = operations.size();
        int j = 0;
        
        for (int i = 0; i<operationsSize; i++)
        {
            if (operations[i][0] >= '0' && operations[i][0] <='9' || operations[i][0] =='-')
            {
                int num = retInteger(operations[i]);
                record.push_back(num);
                j++;
            }
            else if (operations[i][0] == 'C')
            {
                record.pop_back();
                j--;
            }
            else if (operations[i][0] == 'D')
            {
                record.push_back(2*record[j-1]);
                j++;
            }
            else if (operations[i][0] == '+')
            {
                record.push_back((record[j-1]+record[j-2]));
                j++;
            }
        }
        
        int sum = 0;
        for (int i : record)
        {
            sum+=i;
        }
        return sum;
    }
};