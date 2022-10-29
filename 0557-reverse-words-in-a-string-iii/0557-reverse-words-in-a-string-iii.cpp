class Solution {
public:
    string reverseWords(string s) {
        /*string temp,res;
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
        
        return res;*/
        
        int l=0,r=0,n=s.size();
        string res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '||i==s.size()-1)
            {
                for(int j=(s[i]==' '?r-1:r);j>=l;j--)
                {
                    //(s[i]==' '?r--:r) because if s[i]==' ' 
                    //so the r should reduce by one to end exactly on word 
                    res+=s[j];
                }
                if(i!=s.size()-1) res+=' ';
                l=i+1;
            }
            r++;
        }
        return res;
    }
};