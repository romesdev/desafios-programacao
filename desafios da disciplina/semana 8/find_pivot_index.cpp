class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector <int> accR;
        vector <int> accL;
        accR.push_back(0);
        accL.push_back(0);
      


        int n = nums.size();
        
        int j = n - 1;

        for (int i = 0; i < n; i++){
            accR.push_back(accR.back() + nums[i]);
            accL.push_back(accL.back() + nums[j]);
            j--;

        }
        
       
        reverse(accL.begin(), accL.end());

        for (int i = 0; i < n; i++){
          
            if(accR[i] == accL[i+1]){
                    return i;
            }
            
        }       
        return -1;

        }
};