class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;
        int low = 0, high = x/2;
        long long int mid;
        while (low <= high){
            mid = low + (high-low)/2;
            if (mid * mid == x){
                return mid;
            } else if (mid * mid < x){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return low-1;
    }
};