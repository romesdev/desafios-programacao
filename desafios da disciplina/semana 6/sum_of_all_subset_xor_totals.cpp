class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int sum = 0; 
        int n = nums.size();
        int k = 0;
       

        for (int mask = 0; mask < 1<<n; mask++){
            k = 0;
            
            for (int j = 0; j < n; j++){
                
                if (mask & (1<<j)){
                    k = (k ^ nums[j]);
                }
            
            }
        
            sum += k;
        
        }
        return sum;
        
    }
    
};