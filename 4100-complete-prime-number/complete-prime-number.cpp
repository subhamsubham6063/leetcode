class Solution {
public:
    bool completePrime(int num) {
        static const set<int> sol = {2, 3, 5, 7, 23, 37, 53, 73, 313, 317, 373, 797, 3137, 3797, 739397};
        vector<int> p={2,3,5,7};
         return sol.count(num);
        // while(num){
        //     int lastEle = num%10;
        //     auto it = find(p.begin(), p.end(), lastEle);
        //     cout<<lastEle<<' ';
        // if (it == p.end()) {
        //     return 0;
        // }

        //     num = num/10;
        // }
        
    // return 1;

    }
};