int mySqrt(int x) {
    if(x==1) return 1;
    int temp = 0;
 
    for (int i = 0; i <= x / 2; i++) {
        long long res = 1LL * (i + 1) * (i + 1);

        if (1LL * i * i == x) {
            temp = i;
            break;
        }
        else if (res > x) {
            temp = i;
            break;
        }
    }

    return temp;
}