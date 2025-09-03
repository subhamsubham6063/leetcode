class Solution {
public:

    int getLeastFrequentDigit(int n) {
        map<int,int> mp;
        while(n){
            int x= n%10;
            mp[x]++;
            n/=10;
        }
        int ans=1e9,frq=1e9;
        ans=1;
        int final_ans=1e9;
        vector<int>v;
     for(auto &it:mp)
        {
            if(it.second<frq)
            {
                ans=it.first;
                frq=it.second;
            }
            else if(it.second==frq && it.first<ans)
            {
                ans=it.first;
               
            }
        }
        sort(v.begin(),v.end());
        return ans;
    }
};