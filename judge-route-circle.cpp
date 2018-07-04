class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0 , y = 0;
        for (int i =0; i < moves.length(); ++i) {
            switch(moves[i]) {
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
            }
        }
        if (x == 0 && y == 0)
            return 1;
     return 0;
    }
};