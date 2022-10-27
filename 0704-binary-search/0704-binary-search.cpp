class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),md;
        int l=0,r=n-1;
        while(l<=r){
            md=(l+r)/2;
            if(nums[md]==target) return md;
            if(nums[md]<target)l=md+1;
            else r=md-1;
        }
        return -1;
    }
};