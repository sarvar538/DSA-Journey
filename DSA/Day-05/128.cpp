class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for(int num : st) {
            // agar previous number nahi hai → start point
            if(st.find(num - 1) == st.end()) {
                int curr = num;
                int count = 1;

                // chain build karo
                while(st.find(curr + 1) != st.end()) {
                    curr++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
