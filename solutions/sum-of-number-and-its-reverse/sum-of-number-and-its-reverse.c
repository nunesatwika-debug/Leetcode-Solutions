bool sumOfNumberAndReverse(int num) {
    for (int i = 0; i <= num; i++) {
        int x = i;
        int rev = 0;

        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        if (i + rev == num) {
            return true;
        }
    }

    return false;
}