class Removing_Stars_From_a_String {
public:
    string removeStars(string s) {
        string answer = "";
        stack<int>st;
        for(int i = 0 ; i < (int)s.size() ; i++){
            if(!st.empty() and s[i] == '*'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            answer.push_back(st.top());
            st.pop();
        }
        int start = 0 , end = answer.size() - 1;
        while(end >= start){
            swap(answer[end--] , answer[start++]);
        }
        return answer; 
    }
};
