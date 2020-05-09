class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long j = num;
        for (long long i = 1; i * i <= j; i++)
        {
            if (i * i == j)
                return true;
        }
        return false;
    }
};

