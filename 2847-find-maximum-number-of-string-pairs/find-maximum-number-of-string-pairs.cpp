class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> st;
        int ans = 0;
        for (string word : words) {
            string rev = word;
            reverse(rev.begin(), rev.end());

            if (st.count(rev)) {
                ans++;
                st.erase(rev);
            } else {
                st.insert(word);
            }
        }
        return ans;
    }
};