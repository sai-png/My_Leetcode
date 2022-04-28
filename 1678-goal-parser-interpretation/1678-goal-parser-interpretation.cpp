class Solution {
public:
    string interpret(string command)
    {
        int i=0;
        string s;
        while(i<command.size())
        {
            if(command[i]=='G')
            {
                s.append("G");
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                s.append("o");
                i+=2;
            }
            else
            {
                s.append("al");
                i+=4;
            }
        }
        return s;
    }
};