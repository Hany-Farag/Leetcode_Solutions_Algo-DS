class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if (nums[i]+nums[i+1]>nums[i+2]&&
                nums[i]+nums[i+2]>nums[i+1]&&
                nums[i+2]+nums[i+1]>nums[i])
            {
                mx=max(mx,(nums[i]+nums[i+1]+nums[i+2]));
            }
        }
        return mx;
    }
};