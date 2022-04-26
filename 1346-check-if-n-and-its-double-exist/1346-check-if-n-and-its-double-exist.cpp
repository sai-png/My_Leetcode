class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        std::unordered_map<int, bool> map;
        for(int v: arr){
            if(v != 0){
                if(v%2 == 0){
                    if( map.find( v / 2 ) != map.end()) return true;
                }
            }
            if(map.find( 2 * v ) != map.end()) return true;
            map.insert({v, true});
        }
        return false;
    }
};