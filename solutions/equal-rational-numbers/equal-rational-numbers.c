bool isRationalEqual(char* s, char* t) {
    long long a[2] = {0}, b[2] = {0};
    char* str[2] = {s, t};
    for (int k = 0; k < 2; k++) {
        char* p = str[k];
        long long integer = 0, non = 0, rep = 0;
        int n = 0, r = 0;
        while (*p && *p != '.') integer = integer * 10 + (*p++ - '0');
        if (*p == '.') p++;
        while (*p && *p != '(') {
            non = non * 10 + (*p++ - '0');
            n++;
        }
        if (*p == '(') {
            p++;
            while (*p && *p != ')') {
                rep = rep * 10 + (*p++ - '0');
                r++;
            }
        }
        long long scale = 1, repeatScale = 1;
        for (int i = 0; i < n; i++) scale *= 10;
        for (int i = 0; i < r; i++) repeatScale *= 10;
        long long num, den;
        if (r == 0) {
            num = integer * scale + non;
            den = scale;
        } else {
            den = scale * (repeatScale - 1);
            num = integer * den + non * (repeatScale - 1) + rep;
        }
        if (k == 0) a[0] = num, a[1] = den;
        else b[0] = num, b[1] = den;
    }
    return a[0] * b[1] == b[0] * a[1];
}