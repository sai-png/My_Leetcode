class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u'||
          ch=='A' || ch=='E' || ch=='I' ||ch=='O' ||ch=='U') return true;
        return false;
    }
    string reverseVowels(string s) {
        stack<char> st;
        for(auto i:s){
            st.push(i);
        }
         for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                while(!isVowel(st.top())) st.pop();
               s[i]=st.top();
                st.pop();
            }
        } 
        return s;
    }
};