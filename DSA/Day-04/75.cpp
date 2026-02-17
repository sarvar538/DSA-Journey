class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0 ;
        int check = 0 ;
        int end = nums.size()-1;
        while ( check <= end ) {
            if ( nums[check] == 0 ) {
                swap ( nums[left] , nums[check] ) ;
                left ++ ;
                check ++ ;
            }
            else if ( nums[check] == 1 ) {
                check ++ ;
            }
            else {
                swap ( nums[check] , nums[end]) ;
                end -- ;
            }
        }
    }
};
