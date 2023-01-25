class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> bin(n);
       int cnt=0;
        for(int i=0;i<bin.size();i++)
        {
            if(bin[i])cnt++;
        }
     
        return cnt;
    }
};