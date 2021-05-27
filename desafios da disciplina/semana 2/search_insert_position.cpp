class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        
        int esperado;
        
        for (int i = 0; i < n; i++){
            if (nums[i] > target){
                esperado = i;
                break;
            } 
            
            if(nums[i] == target) return i;
        }
        
        return esperado;
    
    }
};