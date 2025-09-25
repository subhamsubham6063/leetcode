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
        // lets do it with power set
        int ans=0;
        int n=nums.size();
       for(int i=0;i<(1<<n);i++){
      int  xor_result=0;
        for(int j=0;j<n;j++){
            if (i & (1 << j)) { 
                xor_result ^= nums[j]; 
            }
        }
        ans += xor_result;
        
       }
        return ans;
    }
};