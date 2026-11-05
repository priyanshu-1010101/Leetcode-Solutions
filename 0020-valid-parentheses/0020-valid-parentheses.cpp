class Solution {
public:
    bool isValid(string s) {
        vector<char> ans;
        for(char ch: s){
            if(ch=='(' || ch=='[' || ch=='{') ans.push_back(ch);
            else{
                if(ans.empty()) return false;
                if((ch==')'  && ans.back()=='(') ||
                    (ch==']' && ans.back()=='[') ||
                    (ch=='}' && ans.back()=='{')) {
                ans.pop_back();
                }
                else return false;
            }
        }
        return ans.empty();
    }
};