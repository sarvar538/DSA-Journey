class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string , int> m ;
        for ( string word : words ) {
            //ek ek word aa chuka hai 
            if ( word.size() < k ) {
                continue ;
            }
            string prefix = word.substr ( 0 , k ) ;
            m[prefix] ++ ;
        }
        int ans = 0 ;
        for ( auto &i : m ) {
            if ( i.second >= 2 ) {
                ans ++ ;
            }
            
        }
        return ans ;
    }
};
