class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int capital=0;
        int small=0;
        for(char ch:word){
            if(ch>='A' && ch<='Z') capital++;
            else small++;
        }
        if(capital==n || (capital==1 && word[0]>='A' && word[0]<='Z') || small==n) return true;
        return false;
    }
};