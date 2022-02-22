class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stack<string> st;
        for (int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                ans+=s[i];
                if(i==s.size()-1)
                st.push(ans);
            }
            else
            {
                if(ans.size())
                    st.push(ans);
                ans=""; 
            }
            
        }
        ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
            if(!st.empty())
                ans+=' ';
        }
        return ans;
        
    }
};