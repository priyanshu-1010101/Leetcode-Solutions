class Solution {
public:
    int setBits(int n) {
        int binNum = 0;
        int pow=1;
        int ans=0;
        while (n > 0) {
            int rem = n % 2;
            binNum += rem*pow;
            pow*=10;
            n /= 2;
        }
        while(binNum>0){
            int rem= binNum%10;
            if(rem==1) ans++;
            binNum/=10;
        }
        return ans;
    }
    
    int calculateScore(int a, int b) {
        int s1=setBits(a);
        int s2=setBits(b);
        
        if(s1>=s2) return s1*s2;
        return s2/s1;
    }
    
};