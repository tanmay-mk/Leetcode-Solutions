class Solution {
public:
    double average(vector<int>& salary) {
        
        int salarySize = salary.size();
        
        sort(salary.begin(), salary.end());
        
        int sum=0; 
        
        for(int i=1; i<salarySize-1; i++)
        {
            sum+=salary[i];
        }
        double avg = (double) sum/(salarySize-2);
        return avg; 
    }
};