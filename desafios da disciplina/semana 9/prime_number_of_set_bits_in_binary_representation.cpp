class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        int num = 0;
        vector <int> nums;
        for (int i = left; i <= right; i++){
            int num = __builtin_popcount(i);
            if (num != 1) nums.push_back(num);
        }
        
        for (auto x: nums){
            bool isPrime = true;
            
            for (int i = 2; i <= x / 2; ++i) {
                if (x % i == 0) {
                    isPrime = false;
                    break;
                }
            } 
            
            if(isPrime) count++;
        
        }
        
        return count;
    }
};