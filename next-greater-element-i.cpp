class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        map<int, int> mp;
        stack<int> st;
        for (int i = 0; i < nums.size(); ++i) {
            if ( st.empty() || nums[i] < st.top()) {
                st.push(nums[i]);
            } else {
                while (!st.empty() && nums[i] > st.top() ) {
                    mp[st.top()] = nums[i];
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        while(!st.empty()) {
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int> ret;
        for (int i = 0; i < findNums.size(); ++i) {
            ret.push_back(mp[findNums[i]]);
        }
        return ret;
    }
};