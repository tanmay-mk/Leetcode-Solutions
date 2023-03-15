char * digitSum(char * s, int k){

    int len = strlen(s);
    int count = 0, sum=0; 
    int idx = 0; 
    
    while(len > k)
    {
        int i; 
        for(i=0; i<len; i++)
        {
            sum += (s[i]-'0');  
            count++;
            if(count == k)
            {
                if(sum >= 10 && sum < 100)
                {
                    s[idx++] = sum/10 + '0';
                    s[idx++] = sum%10 + '0';
                }
                else if (sum >= 100)
                {
                    int start_idx = idx; 
                    int temp = sum; 
                    int numDigits=0;
                    while(temp>0)
                    {
                        numDigits++;
                        temp/=10;
                    }
                    int tempNums = numDigits; 
                    while (sum > 0)
                    {
                        int rem = sum % 10; 
                        s[idx + numDigits - 1] = rem + '0';
                        numDigits--; 
                        sum/=10; 
                    }
                    idx += tempNums;
                }
                else
                {
                    s[idx++] = sum + '0';
                }
                sum = 0;
                count = 0; 
            }
        }
        
        if ((i == len) && (count != 0))
        {
            if(sum >= 10 && sum < 100)
            {
                s[idx++] = sum/10 + '0';
                s[idx++] = sum%10 + '0';
            }
            else if (sum >= 100)
            {
                int start_idx = idx; 
                int temp = sum; 
                int numDigits=0;
                while(temp>0)
                {
                    numDigits++;
                    temp/=10;
                }
                int tempNums = numDigits; 
                while (sum > 0)
                {
                    int rem = sum % 10; 
                    s[idx + numDigits - 1] = rem + '0';
                    numDigits--; 
                    sum/=10; 
                }
                idx += tempNums;
            }
            else
            {
                s[idx++] = sum + '0';
            }
        }

        s[idx] = '\0';
        idx = 0; 
        sum = 0;
        count = 0; 
        len = strlen(s); 
    }
    return s; 
}