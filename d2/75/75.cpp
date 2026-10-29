class Solution{
public:
    void sortColors(vector<int>& a){
        int mid=0, high = a.size() - 1;
        int low = 0, 

        // [0, 1, 2, 2]
        //     |
        //     m
        //     l
        //           h
        
        while(mid <= high){
            if(a[mid] == 0){
                // a[low] = 0;
                swap(a[low], a[mid]);
                low++;
                mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }else {
                swap(a[high], a[mid]);
                high--;
            }
        }
    }
}