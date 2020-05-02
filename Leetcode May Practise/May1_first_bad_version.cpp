// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        unsigned l = 1;
        int h = n;
        while (l < h)
        {
            int m = (l + h) / 2;
            if (isBadVersion(m))
                h = m;
            else
                l = m + 1;
        }
        return h;
    }
};