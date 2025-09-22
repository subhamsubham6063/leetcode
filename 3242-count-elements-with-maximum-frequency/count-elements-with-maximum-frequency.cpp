class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans =0,mx=-1;
        map<int,int>m;
        for(auto &it :nums){
           if(it>=0){
                m[it]++;
            mx=max(mx,m[it]);
           }
        }
        for(auto &it : m){
            if(it.second==mx){
                ans+=mx;
            }
        }
        return ans;
    }
};