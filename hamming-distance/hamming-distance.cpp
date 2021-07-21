class Solution {
public:
    int hammingDistance(int x, int y) {
        x=x^y;
        unsigned int count = 0; 
        while (x) 
        { 
            count += x & 1; 
            x >>= 1; 
        } 
        return count;

    }
};