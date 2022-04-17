class Solution {
public:
int numSplits(string s) {
int goodSplits = 0;
map<char,int> leftChars,rightChars;
// fill rightChars
for(int i = 0; i < s.length(); i++){
// increment count
if(rightChars.count(s[i])){
rightChars[s[i]]++;
}
// add to map
else{
rightChars[s[i]] = 1;
}
}
for(int i = 0; i < s.length(); i++){
// increment count
if(leftChars.count(s[i])){
leftChars[s[i]]++;
}
else{
leftChars[s[i]] = 1;
}
// remove from right map
if(rightChars[s[i]] == 1){
rightChars.erase(s[i]);
}
else{
rightChars[s[i]]--;
}
// compare size
if(leftChars.size() == rightChars.size())
goodSplits++;
}
return goodSplits;
}
};