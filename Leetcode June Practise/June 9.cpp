class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        if(s.length()>t.length())
            return false;
        if(s.empty() || t.empty())
            return true;
        
        for(int i = 0;i<t.length();i++){
            if(t[i] == s[index] && ++index == s.length())
                return true;
        }
            return false;

    }

};
