class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        int p =s.length()-1;
        if(s[p]==' '){
            while(s[p]==' ') p--;
                
        }
                 
            
        for(int i=p;i>=0;i--){
            if(s[i]==' ')return count;
            count++;
        }
        return count;
    }
};