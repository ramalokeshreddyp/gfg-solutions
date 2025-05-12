//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
          sort(meetings.begin(), meetings.end());
    priority_queue<int, vector<int>, greater<int>> freeRooms;
    for (int i = 0; i < n; ++i) freeRooms.push(i);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> busyRooms;
    vector<int> count(n, 0);

    for (auto& m : meetings) {
        long long start = m[0], end = m[1];
        while (!busyRooms.empty() && busyRooms.top().first <= start) {
            int room = busyRooms.top().second;
            busyRooms.pop();
            freeRooms.push(room);
        }

        if (!freeRooms.empty()) {
            int room = freeRooms.top(); freeRooms.pop();
            busyRooms.push({end, room});
            count[room]++;
        } else {
            pair<long long, int> next = busyRooms.top(); busyRooms.pop();
            long long newEnd = next.first + (end - start);
            int room = next.second;
            busyRooms.push({newEnd, room});
            count[room]++;
        }
    }

    int maxCount = 0, resultRoom = 0;
    for (int i = 0; i < n; ++i) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            resultRoom = i;
        }
    }
    return resultRoom;
    }
};


//{ Driver Code Starts.

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> m;
        vector<vector<int>> meetings(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> meetings[i][0] >> meetings[i][1];
        }
        Solution ob;
        cout << ob.mostBooked(n, meetings) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends