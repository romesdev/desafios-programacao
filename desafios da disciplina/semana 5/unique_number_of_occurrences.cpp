class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map <int, int> occ;
            
        vector<int> freq;
        for (auto x: arr){
            occ[x]++;
        }
        
        for(auto & [x, o] : occ){
            freq.push_back(o);      
        }

        
        int n = freq.size();
        auto novo = set(freq.begin(), freq.end());
        int t = novo.size();
        
        
        if(t != n) return false;
        return true;
    }
};