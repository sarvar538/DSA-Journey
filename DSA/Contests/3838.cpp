// Contest Code 
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for ( int i = 0 ; i < words.size(); i++ ) {
            int sum = 0 ;
            for ( int j = 0 ; j < words[i].size(); j++ ) {
                char c = words[i][j];
                int index = c - 'a';
                sum = sum + weights[index];
            }
            int mod = sum % 26 ;
            char mapping = 'z' - mod ;
            ans.push_back(mapping);
        }
        return ans ;
    }
};
