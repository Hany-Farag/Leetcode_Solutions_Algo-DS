class Solution {
public:
    double average(vector<int>& salary) {
        int mn=INT_MAX,mx=INT_MIN;
        long double sm=0;
        for(auto i:salary)
        {
            mn=i<mn?i:mn;
            mx=i>mx?i:mx;
            sm+=i;
        }
        sm=sm-mn-mx;
       return sm/(salary.size()-2); 
    }
};