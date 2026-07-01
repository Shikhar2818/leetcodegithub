1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n = haystack.size(), m = needle.size();
5
6        for (int i = 0; i <= n - m; i++) {
7            int j = 0;
8            while (j < m && haystack[i + j] == needle[j]) {
9                j++;
10            }
11            if (j == m) return i;
12        }
13
14        return -1;
15    }
16};