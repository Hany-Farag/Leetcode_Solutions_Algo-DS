class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(auto i:nums)
        {
            if(i!=0)temp.push_back(i);
        }
        int temp_size=n-temp.size();
        for(int i=0;i<temp_size;i++)
            temp.push_back(0);
        nums=temp;
    }
};