class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int>> ans;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int p = j+1, q = n-1;
                while(p<q){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                    if(sum < target){
                        p++;
                    }else if(sum > target){
                        q--;
                    }else{
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++; q--;
                    }
                }
            }
        }

        return ans;
    }
};