class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded = "";
        for (const std::string& s : strs) {
            encoded += std::to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while (i < s.length()) {

            size_t delimiter_pos = s.find('#', i);
            int length = stoi(s.substr(i, delimiter_pos - i));
            
            i = delimiter_pos + 1; 
            decoded.push_back(s.substr(i, length));
            

            i += length;
        }
        return decoded;
    }
};
