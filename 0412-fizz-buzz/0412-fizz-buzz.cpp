class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1;i<=n;i++){
            string temp=to_string(i);
            if(i%3==0 && i%5!=0) answer.push_back("Fizz");
            else if(i%5==0 && i%3!=0) answer.push_back("Buzz");
            else if(i%15==0) answer.push_back("FizzBuzz");
            else answer.push_back(temp);
        }
        return answer;
    }
};