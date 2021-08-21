class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        
        int n = nums.size();
        int maxBit = (1<<maximumBit) - 1;
        
        vector <int> xors;
        int aux = 0;
        
        for (int i = 0; i < n; i++){
            aux ^= nums[i];
            xors.push_back(aux);           
        }
       
        reverse(xors.begin(), xors.end());
        
        for (int j = 0; j < xors.size(); j++){
            
            xors[j] = xors[j] xor maxBit;
        }      
         
        
        return xors;
    }
};