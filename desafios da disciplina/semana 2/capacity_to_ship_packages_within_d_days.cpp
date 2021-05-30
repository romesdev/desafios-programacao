class Solution {
public:
    
    
    bool pode(vector<int>& weights, int days, int min){
        int num_days = 1;
        int acc = 0;
        for (auto x: weights){
            if (acc + x <= min){
                acc += x;
            }
            else{
                num_days++;
                acc = x;
                
                if( acc > min)
                    return false;
                
            }
        }
            
            return (num_days <= days);
        }
               
        
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sum = accumulate(weights.begin(), weights.end(), 0);
        int min = sum/days;
        
      
        
        for (int i = min; i <= sum; i++){
            
            if(pode(weights, days, i))
                return i;  
             
        }
      
        
        
        return -1;
        
        
    }
};