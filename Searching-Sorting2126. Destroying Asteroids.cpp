class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        sort(asteroids.begin(),asteroids.end());
        
        long long int newMass=(long long int)mass;
        for(auto it:asteroids){
            
            if(it>newMass) return false;
            
            newMass+=it;
        }
        return true;
    }
};
