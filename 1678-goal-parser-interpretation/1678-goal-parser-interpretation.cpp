class Solution {
public:
    string interpret(string c) {
        string s="";                     
        int i=0;
             while(i<c.length()){
                 if(c[i]=='G'){
                     s.append("G");
                     i++;
                 }
                 else if(c[i]=='(' and c[i+1]==')'){
                     s.append("o");
                     i=i+2;
                 }
                 else{
                     s.append("al");
                     i+=4;
                 }
             }                   
        return s;
    }
};