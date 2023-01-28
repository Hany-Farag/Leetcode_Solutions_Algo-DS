class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        map<int,int>mp;
        int cal=0,ind=0;
        for(auto i:points)
        {
            
            if(i[0]==x||i[1]==y)
            {
                cal=abs(x-i[0])+abs(y-i[1]);
              /* if(mp[cal]==0)
               {
                   mp[cal]=ind+1;
                   //cout<<"this is mp first store "<<i[0]<< " "<<i[1]<<" "<<mp[cal]<<endl;
               }
                else 
                {
                    mp[cal]=min(mp[cal],ind+1);
                    //cout<<"this is mp store "<<i[0]<< " "<<i[1]<<" "<<mp[cal]<<endl ;
                }*/
                mp[cal]=(!mp[cal]?mp[cal]=ind+1:mp[cal]=min(mp[cal],ind+1));
            }
            
            ind++;
            
        }
        int res=-1;
        for(auto i:mp)
        {
            if(i.second){
                res=i.second-1;break;
            }
            //cout<<i.first<<" "<<i.second<<endl;
        }
        return res; 
    }
};