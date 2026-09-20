class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int c = (int)s[i];
            int value = ('z' - c + 1) * (i + 1);
            sum += value;
        }

        return sum;
    }
};