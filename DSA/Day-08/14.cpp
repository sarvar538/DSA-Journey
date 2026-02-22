class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if ( strs.size() == 0 ) {
            return "" ;
        }
        string pre = strs[0];
        for ( int i = 0 ; i < pre.size(); i++ ) {
            char ch = pre[i];
            for ( int j = 1 ; j < strs.size(); j++ ) {
                if ( i >= strs[j].length() || strs[j][i] != ch ) {
                    return pre.substr(0 , i) ;
                }
            }
        }
        return pre ; 
    }
};
