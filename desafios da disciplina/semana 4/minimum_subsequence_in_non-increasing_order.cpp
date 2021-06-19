class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) return nums;
        
        sort(nums.begin(), nums.end());
        vector <int> seq; 
        int last;
        int sum = -1;
        int sumSeq = -2;
        while(sumSeq <= sum){
           last = nums.back();
           nums.pop_back();
           seq.push_back(last);
            
           sumSeq = accumulate(seq.begin(), seq.end(), 0);
           sum = accumulate(nums.begin(), nums.end(), 0);

        }
        
        return seq;
    }
};