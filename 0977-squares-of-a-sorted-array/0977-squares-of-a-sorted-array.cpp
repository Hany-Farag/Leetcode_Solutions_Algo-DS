class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<long long,int> mp;
        vector<int>res;
        for(auto i:nums)
        {
            i*=i;
            mp[i]++;
        }
        for(auto i:mp)
        {
            while(i.second--)
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};