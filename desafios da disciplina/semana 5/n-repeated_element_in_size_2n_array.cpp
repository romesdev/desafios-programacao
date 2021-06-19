class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map <int, int> freq;
        int n = nums.size();
        for (auto x : nums){
            freq[x]++;
        }
        
        for (auto & [x, f] : freq){
            if (f == n/2){
                return x;
            }
        }
        
        return -1;
    }
};