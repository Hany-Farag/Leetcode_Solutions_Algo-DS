// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n,md;
        set<int> st;
        while(l<=r)
        {
            md=l+(r-l)/2;
            if(isBadVersion(md)==true)
            {
                st.insert(md);
                r=md-1;
            }
            if(isBadVersion(md)==false)
            {
                l=md+1;
            }
        }
        return *st.begin();
    }
};