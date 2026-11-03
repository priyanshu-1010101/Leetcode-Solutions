
class Solution {
public:
    string decToBin(int n) {
        string binNum = "";

        while (n > 0) {
            int rem = n % 2;
            binNum += char('0' + rem);
            n /= 2;
        }

        return binNum;
    }

    bool hasAlternatingBits(int n) {
        string num = decToBin(n);

        for (int i = 1; i < num.size(); i++) {
            if (num[i] == num[i - 1]) {
                return false;
            }
        }

        return true;
    }
};
