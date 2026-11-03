class Solution {
public:
    string decToBin(int n) {
        if (n == 0) return "0";

        string bin = "";

        while (n > 0) {
            int rem = n % 2;
            bin = to_string(rem) + bin;
            n /= 2;
        }

        return bin;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return decToBin(year) + "-" + decToBin(month) + "-" + decToBin(day);
    }
};