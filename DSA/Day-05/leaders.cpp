class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        ans.push_back(nums[n-1]);
        int checkMax = nums[n-1];
        for ( int i = n-2; i>=0; i-- ) {
            if ( nums[i] > checkMax ) {
                ans.push_back(nums[i]);
                checkMax = nums[i];+
            } 
        }
       reverse ( ans.begin() , ans.end() );
       return ans ;
    }
};
