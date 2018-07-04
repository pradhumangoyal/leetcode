class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      if (bills[0] != 5) return false; // no change to give
      int changes[2] = {1, 0};
      for (int i = 1; i < bills.size(); i++) {
        if (bills[i] == 5) {
          changes[0]++;
          continue;
        }
        else if (bills[i] == 10) {
          if (changes[0] > 0) {
            changes[0]--;
            changes[1]++;
            continue;
          }
          else {
            return false;
          }
        }
        else {
          if (changes[0] > 0 && changes[1] > 0) {
            changes[0]--;
            changes[1]--;
            continue;
          }
          else if (changes[0] > 2) {
            changes[0] -= 3;
            continue;
          }
          else {
            return false;
          }
        }
      }
      return true;
    }
};