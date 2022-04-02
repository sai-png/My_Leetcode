class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        int anagramsIndex = 1;
        unordered_map<string,int> anagramsMap;
        for (int index = 0; index < strs.size(); index++){
            string sorted = strs[index];
            sort(sorted.begin(), sorted.end());
            if (anagramsMap[sorted] == 0){
                anagramsMap[sorted] = anagramsIndex;
                anagrams.push_back(vector<string>{strs[index]});
                anagramsIndex++;
            }
            else{
                anagrams[anagramsMap[sorted] - 1].push_back(strs[index]);
            }
        }
        return anagrams;
    }
};