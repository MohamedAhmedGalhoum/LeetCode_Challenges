class Goal_Parser_Interpretation {
public:
    string interpret(string command) {
        string answer = "";
        for(int i = 1 ; i < (int)command.size() ; i++){
            if(command[i] == ')' and command[i - 1] == '('){
                answer.push_back('o');
            }else if(command[i] == 'l' and command[i - 1] == 'a'){
                answer.push_back('a');
                answer.push_back('l');
            }else if(command[i - 1] == 'G'){
                answer.push_back(command[i - 1]);
            }
        }
        if(isalpha(command.back()))answer.push_back(command.back());
        return answer;
    }
};
