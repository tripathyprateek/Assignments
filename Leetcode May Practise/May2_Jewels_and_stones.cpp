class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        set<char> s1;
        int count = 0;
        int l = J.length();
        for (int i = 0; i < l; i++)
        {
            s1.insert(J[i]);
        }

        l = S.length();
        for (int i = 0; i < l; i++)
        {
            if (s1.find(S[i]) != s1.end())
                ++count;
        }
        return count;
    }
};