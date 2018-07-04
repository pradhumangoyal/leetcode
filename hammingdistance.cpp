class Solution {
public:
    int hammingDistance(int x, int y) {
        if (x == y)
            return 0;
        if ((x&1) == (y&1)) {
            return hammingDistance(x >> 1, y >> 1);
        } else {
            return hammingDistance(x >> 1, y >> 1) + 1;
        }
    }
};