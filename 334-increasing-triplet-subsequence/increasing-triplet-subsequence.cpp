class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int first=INT_MAX, second= INT_MAX, confirm;

        int n=a.size();

        for(int i=0;i<n;i++){
            if(a[i]<=first){
                first=a[i];
            }else if(a[i]<=second){
                second=a[i];
                confirm=first;
            }else{
                return 1;
            }
        }

        return 0;
    }
};