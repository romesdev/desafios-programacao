class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne = 0;
        int one = 0;
        
    
        
        for (auto x: nums){
            if(x == 1) one++;
            
            if(one > maxOne) maxOne = one;
            
            if (x == 0) one = 0;
            
        }
        
        
        return maxOne;
        
        
        
        
    }
};