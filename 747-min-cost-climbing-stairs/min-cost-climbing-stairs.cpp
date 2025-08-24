class Solution {
public:
        int f(int i,vector<int>& cost,vector<int>& dp){
            
            if(i>=cost.size())return 0;

            if(dp[i]!=-1)return dp[i];

            int take_one_step= cost[i]+ f(i+1,cost,dp);
            int take_two_step= cost[i]+ f(i+2,cost,dp);
            return dp[i] = min(take_one_step,take_two_step);

        }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(1001,-1);
        return min(f(0,cost,dp),f(1,cost,dp));
    }
};