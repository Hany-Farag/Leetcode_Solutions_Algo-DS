class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> res;
        for(auto i:nums)
        {
            res.push_back(i);
        }
        while(k--)
        {
            res.push_front(res.back());
            res.pop_back();
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=res[i];
        }
    }
};