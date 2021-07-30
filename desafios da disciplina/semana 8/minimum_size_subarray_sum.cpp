class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        vector <int> arr;
        int sum = 0;
        int minFinal = INT_MAX;
        int min = 0;
        int n = nums.size();
        int index = 0;
        
        for(int i = 0; i < n; i++){
            sum = 0;
            min = 0;
            index = i;
            
            while(target >= sum && index < n){
                if (sum == target) break;
                sum += nums[index];
                min++;
                index++;
            }
           
            if(min < minFinal){
                if(sum >= target) minFinal = min;
            } 
        }
        
    
        if(minFinal == INT_MAX) return 0;
       
        return minFinal;
    }
};