class Solution {
public:
    static constexpr long long MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<long long> up(m, 1), down(m, 1);
        vector<long long> pref(m);

        for (int len = 2; len <= n; len++) {

            // prefix of up
            pref[0] = up[0];
            for (int i = 1; i < m; i++) {
                pref[i] = (pref[i - 1] + up[i]) % MOD;
            }

            // compute newDown using prefUp
            vector<long long> newDown(m);
            for (int i = 0; i < m; i++) {
                long long left = pref[i];
                newDown[i] = (pref[m - 1] - left + MOD) % MOD;
            }

            // prefix of down (reuse same pref array!)
            pref[0] = down[0];
            for (int i = 1; i < m; i++) {
                pref[i] = (pref[i - 1] + down[i]) % MOD;
            }

            // compute newUp
            vector<long long> newUp(m);
            for (int i = 0; i < m; i++) {
                if (i == 0) newUp[i] = 0;
                else newUp[i] = pref[i - 1];
            }

            up = std::move(newUp);
            down = std::move(newDown);
        }

        long long ans = 0;
        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return (int)ans;
    }
};