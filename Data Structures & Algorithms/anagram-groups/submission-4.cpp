class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
         unordered_map<string, vector<string>> mapp;

        for (string s : strs) {
            string sorted_s = s; 
            sort(sorted_s.begin(), sorted_s.end());
            
            mapp[sorted_s].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto& pair : mapp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
