class Solution {
public:
int maxNumberOfBalloons(string text) {
int arr[26];
for(char ch:text) arr[ch-'a']++;
return min({arr[0],arr[1],arr[11]/2,arr[14]/2,arr[13]});
}
};

