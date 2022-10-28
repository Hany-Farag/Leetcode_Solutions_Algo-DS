class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>=nums.size())k%=nums.size(); 
        int dif=nums.size()-k;
        for(int i=0;i<dif;i++)
        {
           nums.push_back(nums[i]);
        }
       nums.erase(nums.begin(),nums.begin()+dif);
    }
};