class Solution {
public:
    long long maximumScore(vector<int>& a, string s) {

        long long ans=0;
        priority_queue<int>pq;
        int n=s.size();
        for(int i=0;i<n;i++){
            pq.push(a[i]);

            if(s[i]=='1'){
                int temp=pq.top();
                pq.pop();
                ans+=temp;
            }
        }

        return ans;
        
    }
};