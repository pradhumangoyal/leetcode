class Solution {
public:
    int findComplement(int num) {
        int no_bits = 0, temp=num;
        while (num > 0) {
            no_bits++;
            num = num >> 1;
        }
        
        return ((1 << no_bits) - 1) ^ temp;
    }
};