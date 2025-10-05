class Solution {
public:
    typedef pair<int, int> pii;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> vis(m, vector<int>(n));

        // For pacific ocean
        queue<pii> q;
        set<pii> st1;
        for(int i = 0;i<m;i++){
            vis[i][0] = 1;
            q.push({i, 0});
            st1.insert({i, 0});
        }

        for(int j = 0;j<n;j++){
            vis[0][j] = 1;
            q.push({0, j});
            st1.insert({0, j});
        }
        
        int x, y, nx, ny;
        while(!q.empty()){
            x = q.front().first;
            y = q.front().second;
            q.pop();
            for(int i = 0;i<4;i++){
                nx = x + dx[i];
                ny = y + dy[i];
                if(nx < 0 or ny < 0 or nx > m-1 or ny > n-1 or vis[nx][ny])
                    continue;
                if(heights[x][y] <= heights[nx][ny]){
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                    st1.insert({nx, ny});
                }
            }
        }

        vis.assign(m, vector<int>(n));

        set<pii> st2;

        for(int i = 0;i<m;i++){
            vis[i][n-1] = 1;
            q.push({i, n-1});
            st2.insert({i, n-1});
        }

        for(int j = 0;j<n;j++){
            vis[m-1][j] = 1;
            q.push({m-1, j});
            st2.insert({m-1, j});
        }

        while(!q.empty()){
            x = q.front().first;
            y = q.front().second;
            q.pop();
            for(int i = 0;i<4;i++){
                nx = x + dx[i];
                ny = y + dy[i];
                if(nx < 0 or ny < 0 or nx > m-1 or ny > n-1 or vis[nx][ny])
                    continue;
                if(heights[x][y] <= heights[nx][ny]){
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                    st2.insert({nx, ny});
                }
            }
        }

        vector<vector<int>> res;
        for(pii p: st2){
            if(st1.count(p))
                res.push_back({p.first, p.second});
        }

        return res;


    }
};