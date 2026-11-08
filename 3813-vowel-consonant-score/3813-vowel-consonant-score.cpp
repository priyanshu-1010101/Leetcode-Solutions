class Solution {
public:
    int vowelConsonantScore(string s) {
        int vow=0,cons=0;
        for(char c:s){
            if(isalpha(c)) {
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                    c=='A'||c=='E'||c=='I'||c=='O'||c=='U') vow++;
                else cons++;
            }
        }
        if(cons==0) return 0;
        return floor((double)vow / cons);
    }
};