class Solution {
public:
    string removeOuterParentheses(string s) {
        string novo;     
    
        int contador = 0;
        
        for (auto c : s){
            
            if ( c == '(' && contador++ > 0) 
                novo.push_back(c);
            
            if ( c == ')' && contador-- > 1) 
                novo.push_back(c);
                
        }
       
        return novo;
    }
};