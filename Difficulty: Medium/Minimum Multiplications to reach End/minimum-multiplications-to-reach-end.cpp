class Solution {
public:
    int minSteps(vector<int>& arr, int start, int end) {
        vector<int> dist(1000, -1);
        queue<int> q;
        
        q.push(start);
        dist[start] = 0;
        
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            
            if (cur == end) return dist[cur];
            
            for (int x : arr) {
                int nxt = (cur * x) % 1000;
                
                if (dist[nxt] == -1) {
                    dist[nxt] = dist[cur] + 1;
                    q.push(nxt);
                }
            }
        }
        
        return -1;
    }
};