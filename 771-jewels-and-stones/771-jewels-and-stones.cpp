class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> jewels_count, stones_count;
        int count=0;
		
        for (int i=0;i<jewels.size();i++){jewels_count[jewels[i]]++;}
        for (int i=0;i<stones.size();i++){stones_count[stones[i]]++;}
        map<char,int>::iterator itr;
		
        for (itr=stones_count.begin();itr!=stones_count.end();itr++){
            if (jewels_count.find(itr->first)!=jewels_count.end()){
                count += itr->second;
            }
        }
		
        return count;
    }
};