class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map <string, int> freq;
        map <string, bool> wMap;
        map <char, int> cMap;
        
        int tamanho = 0;
        
        for (auto c: chars){
            cMap[c]++;
        }
        
        
        for (auto w : words){
            freq[w]++;
        }
        
        for (auto w: words){
            wMap[w] = true;
            auto auxMap = cMap;
            
            for (auto c: w){
                auxMap[c]--;
                
                if(auxMap[c] < 0) wMap[w] = false;
            }        
        
        }
        
        
        
        for (auto & [w, b] : wMap){
            int f = 0;
            if(b == true){
                f = freq[w];                
                tamanho += f * w.size();

            }
        }
        
        return tamanho;
        
        
    }
};