class Solution {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        int i = 0 , j = 0;
        int n = a.size() , m = b.size();
        while(i < n && j < m ){
            if(a[i] < b[j])
                i++;
            else if(b[j] < a[i])
                j++;
            else return a[i];
        }

        return -1;
    }
};
