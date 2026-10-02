class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums,
                                       vector<vector<int>>& queries) {
        
        vector<int> ans;

        for (auto query : queries) {
            int k = query[0];
            int trim = query[1];

            vector<pair<string, int>> v;

            for (int i = 0; i < nums.size(); i++) {
                string s = nums[i];

                string trimmed = s.substr(s.size() - trim);

                v.push_back({trimmed, i});
            }

            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                if (a.first != b.first)
                    return a.first < b.first;

                return a.second < b.second;
            });

            ans.push_back(v[k - 1].second);
        }

        return ans;
    }
};