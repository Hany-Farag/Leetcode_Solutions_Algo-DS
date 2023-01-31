class Solution {
public:
    char findTheDifference(string s, string t) {
      /*  sort(s.begin(),s.end());sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])return t[i];
        }
        return t[t.size()-1];
        compllexity nlog(n)+nlog(n)+n=nlog(n)*/
    
        map<char,int>mp;
        for(auto i:s)mp[i]++;
        for(auto i:t)mp[i]++;
        for(auto i:mp)
            if(i.second%2)
                return i.first;
       return ' ';
    }
};