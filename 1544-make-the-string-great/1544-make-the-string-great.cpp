class Solution {
public:
    string makeGood(string s) {
        string ans="";
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
           if(!st.empty()){
               char x=st.top();
               char y=s[i];
               if(abs(x-y)==32){
                   st.pop();
               }
               else{
                   st.push(s[i]);
               }
               
           }
            else{
                st.push(s[i]);
            }
             
        }
        while(!st.empty()){
            ans.insert(ans.begin(),st.top());
            st.pop();
        }
        return ans;
    }
};