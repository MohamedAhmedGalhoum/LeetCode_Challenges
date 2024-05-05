class Check_if_One_String_Swap_Can_Make_Strings_Equal {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2)return true;
        int ans = 0;
        for(int i = 0 ; i < s1.size() ; i++){
            if(s1[i] != s2[i])ans++;
        }
        if(ans <= 2){
            sort(s1.begin() , s1.end());
            sort(s2.begin() , s2.end());
            if(s1 != s2)return false;
            return true;
        }else{
            return false;
        }
    }
};
