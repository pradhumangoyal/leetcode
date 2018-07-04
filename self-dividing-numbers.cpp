class Solution {
public:
    bool isSelfDividing(int n) {
        int x = n;
        while (x > 0) {
            int d = x % 10;
            x /= 10;
            if (d == 0 || (n % d) > 0) return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> v;
        for(int i = left; i <=right; ++i ){
            if (isSelfDividing(i))
                v.push_back(i);
        }
        return v;
    }
};