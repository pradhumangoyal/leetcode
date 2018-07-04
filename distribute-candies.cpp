class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        set<int> s;
        set<int> :: iterator it;
        for (int i = 0; i < nums.size(); ++i) {
           s.insert(nums[i]);
        }
        return min(s.size() , nums.size()/ 2);
    }
};