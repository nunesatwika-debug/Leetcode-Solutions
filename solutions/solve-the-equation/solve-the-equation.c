char* solveEquation(char* equation) {
    int x = 0, num = 0, sign = 1;
    int i = 0;
    while (equation[i] != '=') {
        if (equation[i] == '+') sign = 1, i++;
        else if (equation[i] == '-') sign = -1, i++;
        else {
            int val = 0, hasNum = 0;
            while (isdigit(equation[i])) {
                val = val * 10 + equation[i] - '0';
                hasNum = 1;
                i++;
            }
            if (equation[i] == 'x') {
                x += sign * (hasNum ? val : 1);
                i++;
            } else num += sign * val;
        }
    }
    i++;
    sign = 1;
    while (equation[i]) {
        if (equation[i] == '+') sign = 1, i++;
        else if (equation[i] == '-') sign = -1, i++;
        else {
            int val = 0, hasNum = 0;
            while (isdigit(equation[i])) {
                val = val * 10 + equation[i] - '0';
                hasNum = 1;
                i++;
            }
            if (equation[i] == 'x') {
                x -= sign * (hasNum ? val : 1);
                i++;
            } else num -= sign * val;
        }
    }
    char* ans = malloc(50);
    if (x == 0 && num == 0) sprintf(ans, "Infinite solutions");
    else if (x == 0) sprintf(ans, "No solution");
    else sprintf(ans, "x=%d", -num / x);
    return ans;
}