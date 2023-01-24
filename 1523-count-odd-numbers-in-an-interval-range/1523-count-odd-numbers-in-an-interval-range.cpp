class Solution {
public:
    int countOdds(int low, int high) {
        if(low==high)
        {
            if(low%2)return 1;
            else return 0;
        }
        if (low%2&&high%2)
        {
            return((high-low)/2)+1;
        }
        return ((high-low-1)/2)+1;
        
    }
};