bool isAnagram(char* s, char* t) {
    int len_s = strlen(s), len_t = strlen(t);
    if (len_s != len_t) {
        return false;
    }
    int table[26];
    memset(table, 0, sizeof(table));
    for (int i = 0; i < len_s; ++i) {
        table[s[i] - 'a']++;
    }
    for (int i = 0; i < len_t; ++i) {
        table[t[i] - 'a']--;
        if (table[t[i] - 'a'] < 0) {
            return false;
        }
    }
    return true;
}
