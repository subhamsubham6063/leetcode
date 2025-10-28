class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        vector<int>laser;

        for(auto it:bank){
            int temp=0;
            for(auto xt:it){
                if(xt=='1'){
                    temp++;
                }
            }
            if(temp>0){
            laser.push_back(temp);
            }
        }
int n= laser.size();
        for(int i=0;i<n-1;i++){//cout<<it<<" ";
        ans+=laser[i]*laser[i+1];
        }
        return ans;
    }
};