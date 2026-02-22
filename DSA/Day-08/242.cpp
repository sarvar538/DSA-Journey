class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.size() != t.size()){
            return false ;
        }
        unordered_map<char , int> m ;

        for ( int i = 0 ; i < s.size() ; i++ ) {
            //pehli string par 
            // m[nums[i]] ++;
            char c = s[i] ;
            m[c] ++ ;
        }

        for ( int i = 0 ; i < t.size(); i++ ) { // nagaram 
            char c = t[i] ;
            if ( m.find(c) == m.end() ){
                return false ;
            }
            else {
                m[c]--;
            }
            if ( m[c] == 0 ) {
                m.erase(c) ;
            }
        }
        return true ;
    }
};
