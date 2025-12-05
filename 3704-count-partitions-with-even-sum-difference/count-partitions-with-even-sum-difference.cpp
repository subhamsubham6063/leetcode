class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans =0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int left = accumulate(nums.begin(),nums.begin()+i,0);
            int right = accumulate(nums.begin()+i,nums.end(),0);
            if((left+right) %2 == 0)ans++;
        }
        return ans;
    }
};