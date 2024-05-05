class Solution {
public:
    int secondHighest(string s) {
        set<int>st;
        for(int i = 0 ; i < (int) s.size() ; i++){
            if(isdigit(s[i])){
                st.insert(s[i] - '0');
            }
        }
        if(st.size() <= 1){
            return -1;
        }else{
            vector<int>answers;
            for(auto &ele : st){
                answers.push_back(ele);
            }
            return (*max_element(answers.begin() , answers.end() - 1));
        }
    }
};
