class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count=0;
        int max=-99999;
        for(int i=0;i<gain.size();i++){
            count+=gain[i];
        if(count>max)
          max=count;
        }
            if(max<0)
                return 0;
        return max;
        
    }
    
};