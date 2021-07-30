class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 0;
        int acc;
        bool flag;
        int value = 0;
        while (startValue == 0){
            value++;
            acc = value;
            
            flag = true;
            for (auto x: nums){
                acc += x;
                if (acc < 1){
                    flag = false;
                    break;
                } 
            }
            
            if (flag == true){
                startValue = value;
            } 
        }
        
        
        
        
        return startValue;
    }
};