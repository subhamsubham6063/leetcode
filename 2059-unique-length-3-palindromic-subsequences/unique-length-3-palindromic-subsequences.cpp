class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        set<char>st;
        for(auto &it :s){
            st.insert(it);
        }

        int ans=0;
        for(auto it:st){

            char x= it;
            int start=-1;
            int end=-1;

            for(int i=0;i<n;i++){
                if(start==-1 && s[i] == x){
                    start=i+1;
                }

                 if(end==-1 && s[n-1-i] == x){
                   end=n-1-i;
                }
            }
            vector<int>h(256,0);
            for(int i=start;i<end;i++){
                if(!h[s[i]]){
                    ans++;
                    h[s[i]]=1;
                }
            }

        }
        return ans;
    }
};