string mergeAlternately(string word1, string word2) {
    int i = 0, j = 0;
    string word = "";
    while (i < word1.length() || j < word2.length()) {
        if (i < word1.length()) {
            word += word1[i];
            i++;
        }
        if (j < word2.length()) {
            word += word2[j];
            j++;
        }
    }
    return word;
}
