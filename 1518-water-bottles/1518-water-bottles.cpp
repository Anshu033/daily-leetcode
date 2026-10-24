class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        int total = numBottles;
        int empty = numBottles;

        while(empty>=numExchange)
        {
            int newBottles = empty/numExchange;
            total+=newBottles;

            // update krdo empty ko

            empty=empty%numExchange+newBottles;
        }
        return total;
        
    }
};