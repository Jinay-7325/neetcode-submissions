class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for (int n : nums) {
            counter[n]++;
        }

        // Store as {frequency, value} pairs
        vector<pair<int, int>> freqList;
        for (auto const& [val, freq] : counter) {
            freqList.push_back({freq, val});
        }

        // Sort by frequency in descending order
        sort(freqList.begin(), freqList.end(), greater<pair<int, int>>());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqList[i].second);
        }
        
        return ans;
    }
};
