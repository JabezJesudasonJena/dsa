class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int lp = 0, hp = n-1;
        
        int water = -1;

        while(lp < hp){
            if (water == -1){
                int minBound = min(a[lp], a[hp]);
                water = ((hp - lp) * minBound);
            } else if(a[lp] < a[hp]){
                int minBound = min(a[lp], a[hp]);
                int t = (hp-lp) * minBound;
                water = max(t, water);
                lp++;
            }else {
                int minBound = min(a[lp], a[hp]);
                int t = (hp-lp) * minBound;
                water = max(t, water);
                hp--;   
            }
        }

        return water;
    }
};