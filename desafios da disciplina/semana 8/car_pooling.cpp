class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int acc = 0;
        vector <int> people;
        people.assign(1002, 0);
        
        for (auto t: trips){
            
            int capacity = t[0];
            int start = t[1];
            int end = t[2];
            
            people[start] += capacity;
            people[end] -= capacity;
            
        }
        
        
        for (int i = 0; i <= 1000; i++){
            acc += people[i];
            
            if(acc > capacity) return false;
        
        }
          
        
        return true;
        
    }
};class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int acc = 0;
        vector <int> people;
        people.assign(1002, 0);
        
        for (auto t: trips){
            
            int capacity = t[0];
            int start = t[1];
            int end = t[2];
            
            people[start] += capacity;
            people[end] -= capacity;
            
        }
        
        
        for (int i = 0; i <= 1000; i++){
            acc += people[i];
            
            if(acc > capacity) return false;
        
        }
          
        
        return true;
        
    }
};