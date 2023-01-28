class Solution {
public:
    set<int>st;
    bool isHappy(int n) {
        string nm=to_string(n);
        int sm=0;
        for(auto i:nm)
        {
            sm+=((i-'0')*(i-'0'));
        }
        if(st.find(sm)!=st.end())return false ;
        st.insert(sm);
        if(sm==1)return true;
        return isHappy(sm);
        
    }
};