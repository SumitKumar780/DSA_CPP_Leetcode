class Solution {
public:
    string reverseByType(string s) {

        int n = s.length();

        int i = 0, j = n - 1;

        while (i < j) {
            if (!isalpha(s[i])) {
                i++;
            }
            else if (!isalpha(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        i = 0;
        j = n - 1;

        while (i < j) {
            if (isalpha(s[i])) {
                i++;
            }
            else if (isalpha(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};