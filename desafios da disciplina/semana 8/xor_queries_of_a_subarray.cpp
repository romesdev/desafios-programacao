class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector <int> res;
        int value = 0;
        vector <int> accXor;
        int n = arr.size();
        accXor.resize(n+1, 0);
        
        for (int i = 1; i <= n; i++){
            accXor[i] = arr[i-1] ^ accXor[i-1];
        }
    
        
        for (auto q: queries){
            int a = q[0];
            int b = q[1];
            value = accXor[b+1] ^ accXor[a];
            res.push_back(value);
            
        }
        
        
        /*
        passa em 41/42;
        for (auto query: queries){
             
            value = 0;
            
            for (unsigned int j = query[0]; j <= query[1]; j++){                    
                    value ^= arr[j];
            }         
        
            res.push_back(value);
            value = 0;

        } 
        */
        
        return res;
    }
};