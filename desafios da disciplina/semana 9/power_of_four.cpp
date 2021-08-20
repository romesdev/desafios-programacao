class Solution {
public:
    bool isPowerOfFour(int n) {        
       
        int oneBit = __builtin_popcount(n);
      
        if(oneBit != 1) return false;
    
        int zeros = __builtin_ctz(n);      
        
        if (zeros % 2 == 0) return true;
        else return false;        
        
    }
};