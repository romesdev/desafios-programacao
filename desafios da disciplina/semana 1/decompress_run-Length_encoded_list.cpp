class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
     

        vector<int> novo;
        
        int n = nums.size();
        int k;

       for (int i = 0; i < n/2; i++){
            k = nums[2*i];            
            while(k != 0){
                k--;
                novo.push_back(nums[2*i+1]);
            }
        }
        
        return novo;
    }
};