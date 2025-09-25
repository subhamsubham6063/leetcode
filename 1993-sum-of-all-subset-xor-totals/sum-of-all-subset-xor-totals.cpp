class Solution {
public:
    int sum(vector<int>& a){
        int ans=0;
        for(auto it:a){
            ans^=it;
        }
        return ans;
    }

    int subsets(int i,vector<int>& a,vector<int> temp){
        if(i==a.size()){
            return sum(temp);
        }

        temp.push_back(a[i]);
        int take = subsets(i+1,a,temp);

        temp.pop_back();
       int not_take= subsets(i+1,a,temp);

        return take + not_take;

    }

    int subsetXORSum(vector<int>& nums) {
        // lets do it with recursion
        int ans=0;
        vector<int> temp;
        ans = subsets(0,nums,temp);
        return ans;
    }
};