char* numberToWords(int num) {
    static char result[1000];
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *thousands[] = {"", "Thousand", "Million", "Billion"};
    result[0] = '\0';
    if (num == 0) {
        strcpy(result, "Zero");
        return result;
    }
    int group = 0;
    while (num > 0) {
        int n = num % 1000;
        if (n > 0) {
            char temp[200] = "";
            if (n >= 100) {
                strcat(temp, ones[n / 100]);
                strcat(temp, " Hundred");
                n %= 100;
                if (n) strcat(temp, " ");
            }
            if (n >= 20) {
                strcat(temp, tens[n / 10]);
                n %= 10;
                if (n) strcat(temp, " ");
            }
            if (n > 0 && n < 20) strcat(temp, ones[n]);
            if (group > 0) {
                strcat(temp, " ");
                strcat(temp, thousands[group]);
            }
            if (result[0]) {
                strcat(temp, " ");
                strcat(temp, result);
            }
            strcpy(result, temp);
        }
        num /= 1000;
        group++;
    }
    return result;
}