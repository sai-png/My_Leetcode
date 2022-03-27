class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                c++;
            else if(s[i]==')')
            {
                if(c==0)
                    s[i]='#';
                else
                    c--;
            }
        }
        c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                c++;
            else if(s[i]=='(')
            {
                if(c==0)
                    s[i]='#';
                else
                    c--;
            }
        }
        c=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            // cout<<s[i];
            if(s[i]!='#')
                c++;
            else
            {
                ans=max(ans,c);
                c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};