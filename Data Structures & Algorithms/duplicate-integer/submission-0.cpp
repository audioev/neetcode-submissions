#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash_map;
        bool flg = false;
        int ctr = 0;
        for(auto i : nums){
            if(hash_map.find(static_cast<int>(i)) != hash_map.end()){
                flg = true;
                break;
            }else{
                hash_map[i] = ctr++;
            }
        }
        return flg;
    }
};