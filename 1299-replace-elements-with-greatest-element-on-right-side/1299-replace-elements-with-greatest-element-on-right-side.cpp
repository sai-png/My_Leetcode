class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans ;
       int i;
        for(i=0;i<arr.size()-1;i++)
                ans.push_back(*max_element(arr.begin()+i+1,arr.end()));
        
         if( i==arr.size()-1)
                ans.push_back(-1);
        return ans;
    }
};