class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ni = g.size();
        int content = 0;
        int j = 0;
        int nj = s.size();
        for (int i = 0; i < ni && j < nj ;){
            if (s[j] >= g[i]){
                content++;
                i++;
               }
             j++;
            }
        
    
  
        
        return content;
        
    }
};