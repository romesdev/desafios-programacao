class Solution {
public:
    
    static bool cmp(vector <int> box1, vector <int> box2){
        return box1[1] > box2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort (boxTypes.begin(), boxTypes.end(), cmp);
        int tam = boxTypes.size();
        int maxUnits = 0;
        int i = 0;
        for (auto b: boxTypes){
            
            
            if (truckSize > 0){
                while((b[0] > 0)){
                    if(truckSize <= 0) return maxUnits;
                    maxUnits += b[1];
                    truckSize--;
                    b[0]--;                
                }
            }
            
            
            
        }
        
        
        return maxUnits;
    }
};