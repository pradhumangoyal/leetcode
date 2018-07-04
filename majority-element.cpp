class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int curr = nums[0];
        for (int i = 0 ; i < nums.size(); ++i) {
            if (vote == 0)
                curr = nums[i];
            if (nums[i] == curr)
                vote++;
            else
                vote--;
        }
        return curr;
    }
};