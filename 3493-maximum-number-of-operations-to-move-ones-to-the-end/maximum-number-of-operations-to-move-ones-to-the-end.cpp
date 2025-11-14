class Solution {
public:
    int maxOperations(string s) {
        //sort(s.begin(),s.end());
       // cout<<s;
        if(is_sorted(s.begin(),s.end())){
            return 0;
        }

        int ans=0,val=0,n=s.size();
        int cnt=0;
        bool got_z=1;

        for(int i=0;i<n;i++){
            if(s[i]=='0' && !got_z){
                ans+= cnt;
                got_z=1;
            }
            if(s[i] == '1'){
                cnt++;
                got_z=0;
            }
        }


        // for(int i=0;i<n;i++){
        //     char c= s[n-i-1];
        //     if(c == '1' ){
        //    // got_one=1;
        //     ans+=(val + cnt);
        //    cnt++;
        //   got_z=1;
        //     }

        //     if(c=='0' && !got_z ){
        //         val++;
        //         got_z=1;
        //        cnt=0;
        //     }
        // }
        return ans;
    }
};