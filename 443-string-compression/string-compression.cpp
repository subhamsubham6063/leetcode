class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        
        int i=0,idx=0;

        while(i<n){
        int ans=0;
            char curr_char = chars[i];
            //i++;
            //if(i>=n)break;
            while(i<n && curr_char == chars[i]){
                ans++;
                i++;
            }
            chars[idx]= curr_char;
            idx++;
            if(ans>1){
                string temp= to_string(ans);
                for(auto &it : temp){
                    chars[idx] = it;
                    idx++;
                }
            }

        }

        return idx;
    }
};