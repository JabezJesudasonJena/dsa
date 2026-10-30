class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty() || matrix[0].empty())
            return false;

        int sr = 0, er = matrix.size() - 1;

        int high = matrix[0].size() - 1;

        while(sr <= er) {

            int mid = sr + (er - sr) / 2;

            if(target < matrix[mid][0]) {
                er = mid - 1;
            }
            else if(target > matrix[mid][high]) {
                sr = mid + 1;/
            }
            else {

                int low = 0, h = high;

                while(low <= h) {

                    int midmid = low + (h - low) / 2;

                    if(matrix[mid][midmid] > target) {
                        h = midmid - 1;
                    }
                    else if(matrix[mid][midmid] < target) {
                        low = midmid + 1;
                    }
                    else {
                        return true;
                    }
                }

                return false;
            }
        }

        return false;
    }
};