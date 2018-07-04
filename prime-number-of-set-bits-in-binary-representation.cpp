class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        map<int, bool> mp = { { 2, 1}, { 3, 1},{ 5, 1},{ 7, 1},{ 11, 1},{ 13, 1},{ 17, 1},{ 19, 1},{ 23, 1}, { 29, 1},{ 31, 1} };
        int count = 0;
        for (int i = L; i <= R; ++i) {
            int t = i;
            int n = 0;
            while(t > 0){
                if (t & 1)
                    n++;
                t = t >>1;
            }
            if (mp[n])
                count++;
        }
        return count;
    }
};