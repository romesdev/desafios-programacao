class Solution {
public:
    string reverseVowels(string s) {
        vector <char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        int start = 0;
        int end = s.size();
        while (start < end){
            
            if(find(vowels.begin(), vowels.end(), s[start]) != vowels.end()) {
                if(find(vowels.begin(), vowels.end(), s[end - 1]) != vowels.end()){
                    
                    swap(s[start], s[end - 1]);
                    
                    start++;
                    end--;
                
                }
            
            }
            
            if(find(vowels.begin(), vowels.end(), s[start]) != vowels.end()) {
                if(find(vowels.begin(), vowels.end(), s[end - 1]) == vowels.end()){
                    end--;
                }
            }
            
            else{
                start++;
            }
        
        
        }
        
        return s;
        
    }
};