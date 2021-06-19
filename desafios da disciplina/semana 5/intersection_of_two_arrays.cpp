class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        map <int, int> freq1;
        map <int, int> freq2;
        vector <int> inter;
        
        for (auto x : nums1){
            freq1[x]++;
            
        }
        
        for (auto k : nums2){
            freq2[k]++;
        }
        
        for (auto [e, f] : freq1){
            if (freq2[e] > 0)
                inter.push_back(e);
        }
    
    
        return inter;


        
    }
};