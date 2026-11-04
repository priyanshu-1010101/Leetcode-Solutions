class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int r = coordinates.size();
        bool check = true;

        int x = coordinates[1][0] - coordinates[0][0];
        int y = coordinates[1][1] - coordinates[0][1];

        for(int i = 2; i < r; i++) {
            if((coordinates[i][0] - coordinates[i-1][0]) * y !=
               (coordinates[i][1] - coordinates[i-1][1]) * x) {

                check = false;
                break;
            }
        }

        return check;
    }
};