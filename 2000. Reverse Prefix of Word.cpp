class Reverse_Prefix_of_Word {
public:
    string reversePrefix(string word, char ch) {
        int pos = -1;
        for (int i = 0; i < (int)word.size(); i++) {
            if (ch == word[i]) {
                pos = i;
                break;
            }
        }
        if (pos == -1) {
            return word;
        } else {
            int start = 0, end = pos;
            while (end >= start) {
                swap(word[end--], word[start++]);
            }
        }
        return word;
    }
};
