class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        vector<int>ans;
        map<long long,long long>mp;
        for(int i=1;i<1000;i++){
            for(int j=i+1;j<1000;j++ ){
                long long a= i*i*i;
                long long b = j*j*j;
                if( a+b <= n){
                    mp[a+b]++;
                }
            }
        }

        for(auto it:mp){
            if(it.second>=2){
                ans.emplace_back(it.first);
            }
        }
        return ans;
    }
};