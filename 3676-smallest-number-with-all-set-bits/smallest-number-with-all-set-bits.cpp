class Solution {
public:
    int smallestNumber(int n) {
        vector<int>ans;
        int x=1;
        for(int i=0;i<10;i++){
            ans.push_back(x);
            x= (x<<1) | 1;
            cout<<x<<' ';
        }
        auto it = *lower_bound(ans.begin(),ans.end(),n);
        return it;
    }
};