class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        int start = 0;
        int n = nums.size();
        int cont = 0;
        vector <int> ans;

        
        while (start < n){
                        
            if (nums[start] != 0){
                ans.push_back(nums[start]);
            }
           
            if (nums[start] == 0){
                cont++;
            }
            
            start++;
        }

        if (cont > 0){
            int i = 0;

            while(i < cont){
                ans.push_back(0);    
                i++;
            }
        }
        
        nums = ans;
    }
};