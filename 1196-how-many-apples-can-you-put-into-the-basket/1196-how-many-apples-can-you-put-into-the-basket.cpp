class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        
        sort(weight.begin(), weight.end());
        
        int sum=0;
        
        for(int i:weight)
        {
            sum += i;
        }
        
        int apples = weight.size();
        
        while(sum > 5000)
        {
            sum -= weight.back();
            weight.pop_back();
            apples--;
        }
        
        return apples; 
    }
};