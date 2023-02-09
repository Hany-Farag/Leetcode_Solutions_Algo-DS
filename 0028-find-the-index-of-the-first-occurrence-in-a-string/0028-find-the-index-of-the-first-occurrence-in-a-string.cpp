class Solution {
public:
    int strStr(string haystack, string needle) {
       // return haystack.find(needle); easiest solution with builtin function 
        
        
        // slide window approach
        int sz1=haystack.size(),sz2=needle.size();
        int res_ind=0;// the pointer point the ind of first match
        string s="";
        for(int i=0;i<sz2;i++)
        {
            s+=haystack[i];         //O(m)
        }
        if(s==needle)return 0;
        
        for(int i=sz2;i<sz1;i++)   //O(n-m)
        {
            s.erase(0,1);          //O(m)
            s+=haystack[i];        //o(1)
            res_ind++;
            if(s==needle){
                return res_ind;
            }
        }
                                  //  =>//O(n-m)*O(m)=>O(n*m)
        return -1;
    }
};