class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n1 = word1.size();
        int n2 = word2.size();
        int p1=0, p2=0;
        while (p1 < n1 && p2 < n2) {
            ans += word1[p1++];
            ans += word2[p2++];
        }
        while (p1 < n1) {
            ans += word1[p1++];
        }
        while (p2 < n2) {
            ans += word2[p2++];
        }
        return ans;
    }
};