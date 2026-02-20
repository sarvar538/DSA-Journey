class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        set<int>s;
        unordered_map<int,int>m;
        for ( int i = 0 ; i < nums.size(); i++ ) {
            m[nums[i]]++;
            if ( m[nums[i]] > n / 3) {
                s.insert(nums[i]); 
            }
        }
        for ( int i : s ) {
            ans.push_back(i);
        }
       return ans ;
    }
};
