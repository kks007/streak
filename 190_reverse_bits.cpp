#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int bitsToReverse = sizeof(n) * 8; // Number of bits in uint32_t (usually 32)

        for (int i = 0; i < bitsToReverse; i++) {
            ans = (ans << 1) | (n & 1); // Left shift ans and add the least significant bit of n
            n >>= 1; // Right shift n to move to the next bit
        }

        return ans;
    }
};
