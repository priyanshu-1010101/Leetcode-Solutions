
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int r = mat.size();
        int c = mat[0].size();

        for(int p = 0; p < 4; p++) {
            bool check = true;
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    if(mat[i][j] != target[i][j]) {
                        check = false;
                        break;
                    }
                }
                if(!check) break;
            }
            if(check) return true;

            for(int i = 0; i < r; i++) {
                for(int j = i + 1; j < c; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            int i = 0, j = c - 1;
            while(i <= j) {
                int t = 0;
                while(t < r) {
                    swap(mat[t][i], mat[t][j]);
                    t++;
                }
                i++;
                j--;
            }
        }
        return false;
    }
};
