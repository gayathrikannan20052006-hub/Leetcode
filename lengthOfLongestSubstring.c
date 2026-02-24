int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int index[128]; 
    for (int i = 0; i < n; i++) {
        if (index[s[i]] > start) {
            start = index[s[i]];
        }
        index[s[i]] = i + 1;
        maxLength = (i - start + 1) > maxLength ? (i - start + 1) : maxLength;
    }
    return maxLength;
}
