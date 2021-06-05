class Solution {
public:
    string makeGood(string s) {
        stack <char> st;
        
        int n = s.size();
        for (auto c: s){
            if(st.empty()){   
                
                st.push(c);
            }
            
            else if(!st.empty()){
                
                if(isupper(st.top()) && islower(c)){
                    if(toupper(st.top()) == toupper(c))
                        st.pop();
                    else st.push(c);
                }
                
                else if(isupper(c) && islower(st.top())){
                    if(toupper(st.top()) == toupper(c))
                        st.pop();
                    else st.push(c);

                }                         
                
                else st.push(c);
            }
            
        
        
        
        }
        
        string ss;
        while(!st.empty()){
            cout << st.top();
            ss = ss + st.top();
            st.pop();       
          
        }
        
        reverse(ss.begin(), ss.end());
        
        return ss;
    }
};