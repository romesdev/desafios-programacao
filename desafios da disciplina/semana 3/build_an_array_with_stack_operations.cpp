class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector <string> res;
        string push = "Push";
        string pop = "Pop";
        
        vector <int> novo;
        
        for(int i = 1; i <= n; i++){            
            if(novo == target)
                    return res;
            
            if(binary_search(target.begin(), target.end(), i)){
                res.push_back(push);
                novo.push_back(i);
            }
            
           else{
               res.push_back(push);
               res.push_back(pop);
           }
            
           
    
            
            
        
        }
        
        
        
        
        
        return res;
    }
};