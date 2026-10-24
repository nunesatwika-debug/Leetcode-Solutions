bool canMakeSubsequence(char* str1, char* str2) {
    int i = 0, j = 0;
    while (str1[i] && str2[j]) {
        if (str1[i] == str2[j] || (str1[i] - 'a' + 1) % 26 == str2[j] - 'a')
            j++;
        i++;
    }
    return str2[j] == '\0';
}