
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0 ;
//         for ( int i = 0 ; i < prices.size(); i++ ) {
//             int buy = prices[i];
//             for ( int j = i+1 ; j < prices.size(); j++ ) {
//                 if ( buy < prices[j] ) {
//                     int currProfit = prices[j] - buy ;
//                     maxProfit = max ( currProfit , maxProfit );
//                 }
//             }
//         }
//         return  maxProfit ;
//     }
// };


class Solution {
public:
      int maxProfit(vector<int>& prices) {

        int maxProfit = 0 ;
        int bestBuy = prices[0];
        for ( int j = 1 ; j < prices.size(); j++ ) {
            if ( bestBuy < prices[j] ) {
                maxProfit = max ( maxProfit , prices[j] - bestBuy ) ;
            }
            bestBuy = min ( bestBuy , prices[j] );
        }
      return maxProfit ;
   }
};
