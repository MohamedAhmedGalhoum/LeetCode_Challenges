    // string s = read();
    // int back = s.back() - '0';
    // if(back & 1){
    //     cout << s << endl;
    // }else{
    //     vector<int>answers;
    //     int N = stoi(s);
    //     answers.push_back(N);
    //     while(N){
    //         int Number = N % 10;
    //         answers.push_back(Number);
    //         N/=10;
    //         int cur_Number = N/10;
    //         answers.push_back(cur_Number);
    //     }
    //     int result = INT_MIN;
    //     for(int i = 0 ; i < (int) answers.size() ; i++){
    //         if(answers[i] & 1){
    //             result = max(result , answers[i]);
    //         }
    //     }

    //     if(result == INT_MIN){
    //         cout << "" << endl;
    //     }else{
    //         cout << result << endl;
    //     }
    // }
 string largestOddNumber(string s) {
        for (int i = s.size() - 1; i >= 0; --i) {
            if ((s[i] - '0') % 2 != 0) {
                return s.substr(0, i + 1);
            }
        }
        return "";
    }
