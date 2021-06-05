class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        stack <char> st;
        
          for (auto c: s){  
             if(st.empty()){
                  st.push(c);
             }
              
            else{                
                
                if(c == ')' && st.top() == '('){
                    n = n - 2;
                    st.pop();
                }                 
                   
                else st.push(c);
                   
            }             
                                  
        }

        return abs(n);
    }
};