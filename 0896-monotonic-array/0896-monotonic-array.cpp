class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int ck_dec=0,ck_inc=0;
        for(int i=1;i<nums.size();i++)
        {
            if(ck_dec&&ck_inc)break;
            if(nums[i]>nums[i-1]) ck_dec=1;
            if(nums[i]<nums[i-1])ck_inc=1;
        }
        return (ck_dec&&ck_inc?false:true);
        
    }
};