class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); ++i){
            auto diff = target - nums[i];
            auto obj = map.find(diff);
            if(obj != map.end()){
                return {obj->second, i};
            }else{
                map[nums[i]] = i;
            }
        }

        return {};
    }
};