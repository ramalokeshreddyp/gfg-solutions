//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
          int n = mat.size(), m = mat[0].size();
        queue<pair<int, int>> q;  
        int freshOranges = 0, time = 0;

       
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

   
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 2) {
                    q.push({i, j});
                } else if (mat[i][j] == 1) {
                    freshOranges++;
                }
            }
        }

        
        while (!q.empty() && freshOranges > 0) {
            int size = q.size();
            time++;

            for (int i = 0; i < size; i++) {
                pair<int, int> cell = q.front();
                q.pop();
                int row = cell.first, col = cell.second;

                
                for (pair<int, int> dir : directions) {
                    int newRow = row + dir.first, newCol = col + dir.second;

                    if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && mat[newRow][newCol] == 1) {
                        mat[newRow][newCol] = 2; 
                        q.push({newRow, newCol});
                        freshOranges--; 
                    }
                }
            }
        }

        return freshOranges == 0 ? time : -1;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends