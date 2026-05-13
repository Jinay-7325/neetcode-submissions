class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sm;
        unordered_map<char,int> tm;

        for(int i=0;i<s.size();i++)
        {
            sm[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            tm[t[i]]++;
        }

        if(sm==tm)
        {
            return true;
        }
        return false;
    }
};
