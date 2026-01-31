// 151. Reverse Words in a String
// https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int i = 0, n = s.size();

        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            if (i >= n) break;
            int start = i;
            while (i < n && s[i] != ' ') i++;
            words.push_back(s.substr(start, i - start));
        }

        reverse(words.begin(), words.end());

        string ans = "";
        for (int i = 0; i < words.size(); i++) {
            ans += words[i];
            if (i != words.size() - 1) ans += " ";
        }
        return ans;
    }
};

