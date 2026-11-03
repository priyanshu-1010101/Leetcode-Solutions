bool isPalindrome(int x) {
    if(x<0) return false;
    int temp = x;
    double num=0;
    while(x!=0){
        int q = x%10;
        num = num *10 + q;
        x = x/10;
    }
    if(temp==num) return true;
    else return false;

}