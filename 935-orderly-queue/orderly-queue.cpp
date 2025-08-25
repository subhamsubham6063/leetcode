class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
             return s;
        }

        string ans=s;
        int n=s.size();
        for(int i=0;i<n;i++){
            string second_half=s.substr(i);
            string first_half =s.substr(0,i);
            string temp = second_half + first_half;
            ans= min(ans,temp);
        }
        return ans;
    }
};