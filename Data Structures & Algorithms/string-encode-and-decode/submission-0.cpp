class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string;
        for (auto s : strs) {
            auto size = s.size();
            encoded_string += to_string(size) + "#" + s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int current_pos = 0;
        while (current_pos != s.size()) {
            int j = current_pos;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(current_pos, j - current_pos));
            string str = s.substr(j + 1, len);
            decoded_strs.push_back(str);
            current_pos = j + 1 + len;
        }
        return decoded_strs;
    }
};
