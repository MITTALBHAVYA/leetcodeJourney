#include <bits/stdc++.h>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        count=__builtin_popcount(n);
        return count;
    }
};