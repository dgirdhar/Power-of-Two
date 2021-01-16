class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ret = false;
        int shift = 1;
        
        for (int i = 1; i <= 31; ++i) {
            int temp = n & shift;
            if (temp == n && temp == shift) {
                ret = true;
                break;
            }
            else {
                shift = shift << 1;
            }
        }
        
        return ret;
    }
};
