// ### BACTRACKING ### //

#include <bits/stdc++.h>
using namespace std;

int board[8][8];
bool col_used[8];
bool diag1_used[15]; // row+col
bool diag2_used[15]; // row-col+7
long long answer = 0;

// Try to place a queen in 'row'
void dfs(int row) {
    if (row == 8) {
        // placed 8 queens successfully
        answer++;
        return;
    }
    for (int c = 0; c < 8; c++) {
        if (board[row][c] == 0                  // square is free
            && !col_used[c]
            && !diag1_used[row + c]
            && !diag2_used[row - c + 7]) 
        {
            // place queen
            col_used[c] = diag1_used[row + c] = diag2_used[row - c + 7] = true;
            dfs(row + 1);
            // backtrack
            col_used[c] = diag1_used[row + c] = diag2_used[row - c + 7] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // read board: '.' = free, '*' = reserved
    // we encode free as 0, reserved as 1
    for (int i = 0; i < 8; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 8; j++) {
            board[i][j] = (s[j] == '*');
        }
    }

    // initialize usage arrays
    memset(col_used,   0, sizeof(col_used));
    memset(diag1_used, 0, sizeof(diag1_used));
    memset(diag2_used, 0, sizeof(diag2_used));

    dfs(0);
    cout << answer << "\n";
    return 0;
}
