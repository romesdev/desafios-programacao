class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //if (target == 'z') return letters[0];
        
        int n = letters.size();
        
        for (int i = 0; i < n; i++){
            if(letters[i] > target) return letters[i];
        }
        
        return letters[0];
    
    }
};