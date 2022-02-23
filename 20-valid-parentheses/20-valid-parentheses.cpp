class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int length = s.length();
        int i=0;
        while(length--){
            if(!stack.empty()){
                char ch = stack.top();
                if(ch == '(' && s[i] == ')') stack.pop();  
                else if(ch == '{' && s[i] == '}') stack.pop();  
                else if(ch == '[' && s[i] == ']')  stack.pop();  
                else stack.push(s[i]);
            } 
            else stack.push(s[i]);
            i++;
        }
        
        if(stack.empty()) return true;
        
        return false;
    }
};
