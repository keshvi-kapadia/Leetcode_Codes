int arraySign(int* a, int n) {
    int i, sign = 1;

    for (i = 0; i < n; i++) {
        if (a[i] < 0)
            sign *= -1;
        else if (a[i] == 0)
            return 0;
    }
    return sign;
}