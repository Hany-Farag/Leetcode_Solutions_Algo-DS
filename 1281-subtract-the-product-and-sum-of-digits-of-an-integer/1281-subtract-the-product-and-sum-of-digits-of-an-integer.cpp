class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sm=0,pro=1;
        string s=to_string(n);
        for(auto i:s)
        {
            sm+=(i-'0');
            pro*=(i-'0');
        }
        return pro-sm;
    }
};