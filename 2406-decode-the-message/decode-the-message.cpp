class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> mp(26, ' ');
        char ch = 'a';
        for (char c : key) {
            if (c == ' ')
                continue;
            if (mp[c - 'a'] == ' ') {
                mp[c - 'a'] = ch;
                ch++;
            }
        }
        for (char &c : message) {
            if (c != ' ') {
                c = mp[c - 'a'];
            }
        }
        return message;
    }
};