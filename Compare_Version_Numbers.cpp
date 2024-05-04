class compareVersionMed {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1, v2;
        stringstream ss1(version1), ss2(version2);
        string token;
        while (getline(ss1, token, '.')) {
            v1.push_back(stoi(token));
        }
        while (getline(ss2, token, '.')) {
            v2.push_back(stoi(token));
        }
        int i = 0;
        while (i < v1.size() || i < v2.size()) {
            int num1 = (i < v1.size()) ? v1[i] : 0;
            int num2 = (i < v2.size()) ? v2[i] : 0;
            if (num1 < num2)
                return -1;
            else if (num1 > num2)
                return 1;
            i++;
        }
        return 0;
    }
};
