/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */




class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int res = -1;
        int aux;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            aux = guess(mid);
            if(aux == 0)
                return mid;
            else if(aux == -1)
                end = mid - 1;            
            else if(aux == 1)
                start = mid + 1; 
        
        }
        
        return res;
        
        
            
            
        
    }
};