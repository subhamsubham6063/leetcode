class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int ans=0;
        for(auto it:o){
            if(it[0]=='-' || it[2]=='-'){
                ans--;
            }else{
                ans++;
            }
        }
        return ans;
    }
};