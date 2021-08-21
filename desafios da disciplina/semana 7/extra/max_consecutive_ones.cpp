class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxOne = 0;
        int one = 0;
        
        int j = 0;
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0) one = 0;
            
            if (nums[i] == 1){
               
                for (j = i; j < nums.size(); j++){
                    if (nums[j] == 0) break;
                    one++;
                }     
                
                i = j;                 
            }
            
            if (one > maxOne) maxOne = one;
            one = 0; 
            
            
        }            
        
        
        return maxOne;
        
        
        
        /* outra alternativa
        int maxOne = 0;
        int one = 0;
        
    
        
        for (auto x: nums){
            if(x == 1) one++;
            
            if(one > maxOne) maxOne = one;
            
            if (x == 0) one = 0;
            
        }
        
        
        return maxOne;
        */
    }
};