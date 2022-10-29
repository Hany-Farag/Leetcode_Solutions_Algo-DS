class Solution {
public:
    string reverseWords(string s) {
        string temp,res;
        for(auto i:s)
        {
            if(i==' ')
            {
                reverse(temp.begin(),temp.end());
                res+=temp+' ';
                temp="";
                continue;
            }
            temp+=i;
        }
        reverse(temp.begin(),temp.end());
        res+=temp;
        
        return res;
    }
};