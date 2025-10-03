class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empties=numBottles;
        int total=numBottles;
        
        while(empties>=numExchange){
            empties-=numExchange;
            
            
            numExchange++;
            total++;
            empties++;
        }
        return total;
    }
};
