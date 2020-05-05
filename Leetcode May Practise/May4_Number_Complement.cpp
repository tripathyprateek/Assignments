// class Solution {
// public:
//     int findComplement(int num) {
//         unsigned index = 2, temp = num;
        
//         while(temp>>1) {
//             temp >>= 1;
//             index <<= 1;
//         }
        
//         return index - num -1;
//     }
        
    
// };

class Solution
{
public:
    int findComplement(int num)
    {
        if (num == 0)
            return 1;
        int log = log2(num) + 1;
        int power = pow(2, log) - 1;
        return num ^ power;
    }
};