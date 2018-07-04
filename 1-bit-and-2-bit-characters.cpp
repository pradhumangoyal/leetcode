class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool flag;
        for (int i  = 0; i < bits.size();) {
            if (bits[i] == 0) {
                flag = 1;
                ++i;
            } else {
                flag = 0;
                i+=2;
            }
        }
        return flag;
    }
};