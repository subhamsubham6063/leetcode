class Solution {
public:
    int numWaterBottles(int numBtl, int numExc) {
        int ans=0,left=0,emBtl=0;
        while(1){
            emBtl+=numBtl;
            ans+=numBtl;

            int neww =emBtl/numExc;
            left = emBtl%numExc;
            if(neww == 0)return ans;

            emBtl= left;

            numBtl= neww;

        }
        
        // while(numBottles>0){
        //     ans+=numBottles;
        //      numBottles/=numExchange;
        //      left+= numBottles%numExchange;
        //     if(left == numExchange){
        //         ans++;
        //         left=0;
        //     }
        // }
        return ans;
    }
};