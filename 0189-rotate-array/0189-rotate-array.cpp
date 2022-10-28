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
/* Another solution with deque 
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
*/
