class Solution {
public:
    bool isSubsequence(string s, string t) {
        string sub;
        int i = 0;
        for (auto c: t){
            
            if (c == s[i]){
                sub.push_back(c);
                i++;
            }      
        }
        
        if (sub == s) return true;
        else return false;
    }
};