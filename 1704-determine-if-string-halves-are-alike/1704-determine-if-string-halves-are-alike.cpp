class Solution {
public:
    bool halvesAreAlike(string s) {
        string a,b;
        int sz=s.size(),a_cnt=0,b_cnt=0;
        a=s.substr(0,sz/2);b=s.substr(sz/2);
        for(auto i:a)if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')a_cnt++;
        for(auto i:b)if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')b_cnt++;
        return(a_cnt==b_cnt?true:false);
    }
};