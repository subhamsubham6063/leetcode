class Solution {
public:

    int f(int idx,int im,int in,vector<pair<int,int>>&mn,int m, int n, vector<vector<vector<int>>>&dimpy){

          if(idx>mn.size() || im>m || in>n) return -1e9;
          if(idx==mn.size())return 0;

            if(dimpy[idx][im][in] != -1)return dimpy[idx][im][in];

          int take= f(idx+1,im+mn[idx].first,in+mn[idx].second,mn,m,n,dimpy)+1;
          int not_take= f(idx+1,im,in,mn,m,n,dimpy);

          return dimpy[idx][im][in] = max(take,not_take);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>mn;
        vector<vector<vector<int>>>dimpy(600,vector<vector<int>>(101,vector<int>(101,-1)));

        int ans;
        for(auto &it:strs ){
            int mc=0,nc=0;
            for(auto &st:it){
                if(st == '0')mc++;
                else nc++;
            }
            mn.push_back({mc,nc});
        }
        // memset(dimpy, -1, sizeof(dimpy))
        ans= max(0,f(0,0,0,mn,m,n,dimpy));
        return ans;
    }
};