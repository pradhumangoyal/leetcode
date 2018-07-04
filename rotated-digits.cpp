class Solution {
public:
    int rotatedDigits(int N) {
    int count = 0;
    for(int i = 1; i<=N; i++)
    {
    int flag = false;

            int num = i;
            while(num != 0)
            {
                int n = num%10;
                if(n == 3 || n == 4 || n == 7 )
                {
                    flag = false;
                    break;
                }
                else if(n == 2 || n == 5 || n == 6 || n==9 )
                    flag = true;
                num /= 10;
            }

            if(flag)
                count++;
        }

        return count;
    }
};