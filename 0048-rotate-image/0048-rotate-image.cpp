class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r= matrix.size();
        int c= matrix[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=i;j<c;j++){
                int temp = matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= temp;
            }
        }
        int i=0,j=c-1;
        while(i<=j){
            int t=0;
            while(t<r){
                int temp = matrix[t][j];
                matrix[t][j] = matrix[t][i];
                matrix[t][i] = temp;
                t++;
            }
            i++;
            j--;

        }
        
    }
};