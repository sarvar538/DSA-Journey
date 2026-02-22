class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if (s.length() != goal.length())
            return false;
        
        for (int i = 0; i < s.length(); i++) {
            
            // rotation
            char first = s[0];
            s.erase(0, 1);
            s = s + first;
            
            if (s == goal)
                return true;
        }
        
        return false;
    }
};
