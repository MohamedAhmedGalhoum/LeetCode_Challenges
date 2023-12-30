 int steps(string s , char c){
        int ret = 0;
        for(auto it : s){
            ret += (it != c);
            c = (c == '0' ? '1' : '0');
        }
        return ret;
    }
    int minOperations(string s) {
        return min(steps(s , '0') , steps(s , '1'));
    }
