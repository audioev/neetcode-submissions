class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto size = nums.size() -1;
        int left = 0;
        int right = size;
        while(left <= right) {
            int mid = left+(right - left) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                left = mid +1;
            }else if(nums[mid] > target){
                right = mid -1 ;
            }else{break;}
        }

        return -1;
    }
};
