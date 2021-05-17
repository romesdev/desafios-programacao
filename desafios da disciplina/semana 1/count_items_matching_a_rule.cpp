class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
        int contador = 0;
        int n = items.size();
        int j;
        
        if(ruleKey == "type") j = 0;
        if(ruleKey == "color") j = 1;
        if(ruleKey == "name") j = 2;

        
        
        for (int i = 0; i < n; i++){
            if(items[i][j] == ruleValue)
                contador++;
        }
        
        return contador;
    }
};