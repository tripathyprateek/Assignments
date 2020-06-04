class Solution {
public:
    void reverseString(vector<char>& s) {
        int num = s.size();
        for(int i = 0;i<num/2;i++)
            swap(s[i],s[num-i-1]);
        
            
    }
};

//today's qustion was far too easy for everyone. Didint expect this type of question. Duh!
