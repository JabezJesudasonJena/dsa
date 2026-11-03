class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int pos = 0;
        int n = nums.size();

        vector<int> ans(n-k +1, INT_MIN);

        while(pos + k -1 < n){
            for(int i=pos; i<k + pos; i++){
                ans[pos] = max(ans[pos], nums[i]);
            }
            pos++;
        }

        return ans;


    }
};