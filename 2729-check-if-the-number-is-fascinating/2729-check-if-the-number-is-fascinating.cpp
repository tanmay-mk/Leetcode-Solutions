class Solution {
public:
    bool isFascinating(int n) {
        
        int numbers[10] = {0}; 
        
        int twice = 2*n; 
        int thrice = 3*n; 
        
        int arr[3] = {n, twice, thrice};
        
        int idx = 0; 
        while(idx < 3)
        {
            while (arr[idx] > 0)
            {
                int rem = arr[idx] % 10; 
                if ( rem == 0 || numbers[rem] != 0)
                {
                    return false; 
                }
                else
                {
                    numbers[rem]++; 
                }
                arr[idx] /= 10;
            }
            idx++; 
        }
        return true; 
    }
};