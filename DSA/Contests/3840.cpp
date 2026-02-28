// Contest Code 
class Solution {
public:
    long long int solve ( int i , vector<int>&nums , vector<int>&colors , vector<int>&dp ) {
        int n = nums.size();
        if ( i >= n ) {
            return 0 ;
        }
        if ( dp[i] != -1 ) {
            return dp[i];
        }
        //exclude 
        int exclude = solve ( i+1 , nums , colors , dp ) ;
        //include 
        int include ;
        if ( i+1 < n && colors[i] == colors[i+1] ) {
            include = nums[i] + solve ( i + 2 , nums , colors , dp) ;
        }
        else {
            include = nums[i] + solve ( i + 1 , nums , colors , dp) ;
        } 
        return dp[i] = max ( exclude , include ) ;  
    }
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        vector<int>dp ( n , -1 ) ;
        return solve ( 0 , nums , colors , dp);
    }
};
