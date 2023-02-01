class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1+str2!=str2+str1)return "";
        int sz1=str1.size(),sz2=str2.size();
        int ind=__gcd(sz1,sz2);
        return str1.substr(0,ind);
        
    }
};