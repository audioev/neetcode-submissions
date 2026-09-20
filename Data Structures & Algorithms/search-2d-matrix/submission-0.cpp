class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int x = 0;
        int y = n * m - 1;    
        while(x <= y){
            int mid = (x + y) / 2;
            int row = mid / m;
            int col = mid % m;
            if(matrix[row][col] == target){
                return true;
            }else if(matrix[row][col] > target){
                y = mid - 1;
            }else{
                x = mid + 1;
            }
        }
        return false;
    }
};
