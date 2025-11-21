class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int>h(101,0);
        int ans=0;
        int n=nums.size();
        for(auto it:nums){
            h[it]++;
        }

        for(auto &it:nums){
            if(h[it]%k == 0){
                ans+=it;
            }
        }
        return ans;

        
    }
};