class Solution {
public:
    string interpret(string command) {
         int pos=0;
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G')
            {
                command[pos]='G';
                pos++;
                
            }
            else if(command[i]=='(' and command[i+1]==')')
            {
                command[pos]='o';
                i++;
                pos++;
            }
            else{
                command[pos]='a';
                command[pos+1]='l';
                pos += 2;
                i += 3;
            }
        }
        return command.substr(0,pos);
    }
};