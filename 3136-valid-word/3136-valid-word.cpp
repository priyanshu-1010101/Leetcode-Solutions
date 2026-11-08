class Solution{
public:
    bool isValid(string word) {
        if(word.length()<3) return false;
        bool vowel = false;
        bool consonant = false;
        for (char ch : word) {
            if(isdigit(ch)) continue;
            if(!isalnum(ch)) return false;
            ch = tolower(ch);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowel = true;
            else consonant = true; 
        }
        return vowel && consonant;
    }
};