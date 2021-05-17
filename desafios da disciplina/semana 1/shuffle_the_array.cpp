class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> novo = nums;
        int j = 0;
        for (int i = 0; i < n; i++){
            j = i + n;
            novo[2*i] = nums[i];
            novo[2*i+1] = nums[j];
        }
        
        return novo;
        
        
    }
};