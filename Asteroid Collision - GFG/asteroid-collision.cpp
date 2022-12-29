//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &ass) {
        // code here
        stack<int>st;
        vector<int>ans;
        int i=0;
        while(i<N && ass[i] < 0){
            ans.push_back(ass[i]);
            i++; }
            for(; i<N; i++){
    while(ass[i] > 0 && i<N){
      st.push(ass[i]); i++ ; 
     }
        if(i == N) break;
    while(ass[i] < 0 && st.size() && abs(ass[i]) > st.top()){
                st.pop(); }
    if(st.size() && ass[i]<0 && abs(ass[i]) == st.top()){
        st.pop();
         continue; }
     if(st.size() == 0) {
        ans.push_back(ass[i]); }
      }
        stack<int> s;
        while(st.size()) {
           s.push(st.top());
           st.pop(); }
      while(s.size()){
        ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends