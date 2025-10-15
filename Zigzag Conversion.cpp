class Solution {
public:
    string convert(string s, int n) {
        if(s.length()<n || n==1) return s;
        int i = 0, k = 0;
        bool flag = true; // true = down, false = up
        vector<string> v(min(n, int(s.length())));

        string res = "";
        while (k < s.length()) {
            v[i] += s[k];
            if (i == n - 1) flag = false;
            if (i == 0) flag = true;
            i += flag ? 1 : -1;
            k++;
        }

        for (int i = 0; i < n; i++) res += v[i];
        return res;
    }
};
