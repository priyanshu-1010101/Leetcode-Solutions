bool isPerfectSquare(int num) {
    if(num==1) return true;
    for (int i = 0; i <= num / 2; i++) {
        if (1LL * i * i == num) {
            return true;
        }
    }

    return false;
}