class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack <int> st;
        int points = 0;
        int op = 0;
        
        auto aux = 0;
        string plus = "+";
        string c = "C";
        string d = "D";
        auto xx = 0;
        for (auto x: ops){
            if(st.empty()){
                xx = stoi(x);
                st.push(xx);
            }
            
            else{
                
                if(x == plus){                    
                    op = st.top();
                    aux = op;
                    st.pop();
                    op += st.top();
                    st.push(aux);
                    st.push(op);
                }
                
                else if(x == c){
                    st.pop();
                }
                
                else if(x == d){
                    op = 2 * st.top();
                    st.push(op);
                }
                
                else st.push(stoi(x));
                
            }
        }
        
    while ( !st.empty() ){
        points += st.top();
        st.pop();
    }
    
        
    return points;
}
    
};