class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        restrictions.push_back({1,0});
        sort(restrictions.begin(), restrictions.end());

        if(restrictions.back()[0] != n) 
            restrictions.push_back({n, n-1});

        int m = restrictions.size();

        for(int i = 1; i < m; i++) {
            int dist = restrictions[i][0] - restrictions[i-1][0];
            restrictions[i][1] = min(restrictions[i][1], restrictions[i-1][1] + dist);
        }

        for(int i = m-2; i >= 0; i--) {
            int dist = restrictions[i+1][0] - restrictions[i][0];
            restrictions[i][1] = min(restrictions[i][1], restrictions[i+1][1] + dist);
        }

        int res = 0;
        for(int i=1; i<m; i++){
            int posDiff = restrictions[i][0] - restrictions[i - 1][0];
            int h1 = restrictions[i - 1][1];
            int h2 = restrictions[i][1];

            res = max(res, (h1 + h2 + posDiff) / 2);
        }
        return res;
    }
};