class Solution {
public:
    // bool searchInRow(vector<vector<int>>& a, int target, int row){
    //     int n= a[0].size();
    //     int st=0, end = n-1;

    //     while(st <= end){
    //         int mid = st+ (end-st) / 2;
    //         if(target == a[row][mid]){
    //             return true;
    //         }else if(target > a[row][mid]){
    //             st = mid+1;
    //         }else{
    //             end = mid -1;
    //         }
    //     }

    //     return false;
    // }


    //  This is my solution with small ai correction
    // Gemini in built inside chrome version

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n - 1;
        
        while (row < m && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--;
            } else {
                row++;
            }
        }
        return false;
    }
};