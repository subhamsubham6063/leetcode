class Solution {
public:
    int numSub(string s) {
        //vector<int>sprints;
        long long int M=1e9+7;
        int n =s.size();
        long long int an=0;
            long long int ans=0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                ans++;
                //an=(an+ ans)%M;
                }
            if(s[i] != '1' || i == n-1){
                an= an+ (ans*(ans+1)/2)%M;
                ans=0;
            }
        }
      //  ans=0;

        // for(auto &it:sprints){
        //     cout<<it<<' ';
        //     ans += (it*(it+1))/2;
        // }

        return (int)an;
    }
};