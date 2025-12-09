class Solution {
public:
    int specialTriplets(vector<int>& nums) {
      unordered_map<int, int> mp_left;
        unordered_map<int, int> mp_right;
         int M = 1e9+7;

        int result = 0;

        for(int &num : nums) {
            mp_right[num]++;
        }

        for(int &num : nums) {
            mp_right[num]--;

            int left  = mp_left[num<<1];
            int right = mp_right[num<<1];

            result = (result + (1LL * left * right)) % M;

            mp_left[num]++;
        }

        return result;
    }
};