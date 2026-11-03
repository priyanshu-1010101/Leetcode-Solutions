class Solution {
public:
    int titleToNumber(string columnTitle) {
        int TN = 0;

        for (char ch : columnTitle) {
            TN = TN * 26 + (ch - 'A' + 1);
        }

        return TN;
    }
};