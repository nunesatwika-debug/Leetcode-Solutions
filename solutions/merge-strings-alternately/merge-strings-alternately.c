

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int max = len1 < len2 ? len2 : len1;
    char * merge = malloc(sizeof(char) * (len1+len2+1));
    int j = 0;
    for (int i = 0; i < max; i++) {
        if (i < len1) merge[j++] = word1[i];
        if (i < len2) merge[j++] = word2[i];
    }
    merge[j] = '\0';
    return merge;
}