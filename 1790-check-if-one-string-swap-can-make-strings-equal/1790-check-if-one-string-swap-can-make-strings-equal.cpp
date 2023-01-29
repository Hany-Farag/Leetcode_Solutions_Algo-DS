class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> indx_store;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i]){  
                indx_store.push_back(i);
                 if(indx_store.size()>2)return false;
            }
        }
        if(indx_store.empty())return true;
        if(indx_store.size()==1)return false;
        swap(s1[indx_store[0]],s1[indx_store[1]]);
        //any string I will make swap on it will give me same result if after swapping will be equal each other not
        //cout<<s1<<" "<<s2<<endl;
        return (s1==s2?true:false);
    }
};