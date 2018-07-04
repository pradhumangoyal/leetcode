class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int lo = 0, hi = A.size();
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (A[mid] > A[mid + 1]) hi = mid;
            else lo = mid + 1;
            
        }
        return lo;
    }
};