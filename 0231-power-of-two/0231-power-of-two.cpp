class Solution {
public:
    bool isPowerOfTwo(int n) {
        double temp=1,i=0;
        while(temp<=n){
            temp = pow(2,i);
            if(n==temp) return true;
            i++;
        }
        return false;
    }
};