class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int x : nums) ++freq[x];

        vector<pair<int,int>> v;
        v.reserve(freq.size());
        for (auto &p : freq) v.emplace_back(p.first, p.second);

        sort(v.begin(), v.end(),
             [&](const auto &a, const auto &b){ return a.second > b.second; });

        vector<int> ans;
        ans.reserve(k);
        for (int i = 0; i < k && i < (int)v.size(); ++i)
            ans.push_back(v[i].first);

        return ans;
    }
};