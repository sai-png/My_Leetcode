class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i=0;
        int res=-1;
        map<int,int>hmap;
        for(int i=0;i<s.size();i++)
        {
            hmap[s[i]]=i;
        }
        while(i<s.size())
        {
              if(hmap.find(s[i])!=hmap.end())
              {
                  res=max(res,(hmap[s[i]]-i-1));
              }
            i++;
        }
       return res;
    }
};