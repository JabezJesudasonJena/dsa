class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n = a.size();
        int finalSum = 0;


        for(int i=0; i<n; i++){
            int currSum = 0;
            for(int j=i; j<n; j++){
                currSum += a[j];
                if(currSum == k){
                    finalSum++;
                }
            }
        }

        return finalSum;
    }
};