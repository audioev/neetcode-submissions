#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp , mp2;
        bool flg = true;
        if(s.size() != t.size()){
            return flg = false;
        }else{
            for(auto &c : s){
                ++mp[c];
            }
            for(auto &c : t){
                ++mp2[c];

            }
            return mp == mp2;
        }

        return flg;
    }
};
