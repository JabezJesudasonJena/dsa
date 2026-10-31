class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> merged;

        int n = a.size();

        merged.push_back(a[0]);
        for(int i=1; i<n; i++){
            if(merged.back()[1] < a[i][0]){
                merged.push_back(a[i]);
            }else{
                merged.back()[1] = max(merged.back()[1], a[i][1]);
            }
        }
        return merged;
    }
};