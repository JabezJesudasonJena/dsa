class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size()-1 , n = mat[0].size()-1;
        int srow = 0, scol = 0, erow = m, ecol = n;

        vector <int> ans;

        while(srow <= erow && scol <= ecol){
            // top
            for(int i=scol; i<=ecol; i++){
                ans.push_back(mat[srow][i]);
            }
            
            // right
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(mat[i][ecol]);
            }

            // bottom
            if(srow < erow){
                for(int i=ecol-1; i>=scol; i--){
                    ans.push_back(mat[erow][i]);
                }
            }

            // left
            if(scol < ecol){
                for(int i=erow-1; i>=srow+1; i--){
                    ans.push_back(mat[i][scol]);
                }
            }

            srow++;scol++;
            erow--;ecol--;
        }

        return ans;
    }
};