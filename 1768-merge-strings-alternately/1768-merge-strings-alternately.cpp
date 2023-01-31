class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int mx_sz=max(word1.size(),word2.size())
            ,mn_sz=min(word1.size(),word2.size());
        string res;
        for(int i=0;i<mn_sz;i++)
        {
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
        for(int i=mn_sz;i<mx_sz;i++)
        {
            if(word1.size()<word2.size())res.push_back(word2[i]);
            else res.push_back(word1[i]);
        }
        return res;
        
    }
};