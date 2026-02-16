// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         sort ( nums.begin() , nums.end());
//         return nums[0];
//     }
// };



// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         // sort ( nums.begin() , nums.end());
//         // return nums[0];

//         int mini = INT_MAX ;
//         for ( int i = 0 ; i < nums.size(); i++ ) {
//             if ( nums[i] < mini ) {
//                 mini = nums[i];
//             }
//         }
//         return mini ;
//     }
// };




class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort ( nums.begin() , nums.end());
        // return nums[0];

        // int mini = INT_MAX ;
        // for ( int i = 0 ; i < nums.size(); i++ ) {
        //     if ( nums[i] < mini ) {
        //         mini = nums[i];
        //     }
        // }
        // return mini ;



        int start = 0 ;
        int end = nums.size()-1;
        while ( start < end ) {
            int mid = start + ( end - start ) / 2 ;
            if ( nums[mid] > nums[end] ) {
                start = mid + 1 ;
            }
            else {
                end = mid ;
            }

        }
        return  nums[start];
    }
};
