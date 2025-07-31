#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    int n; cin >> n;
    vector<int> a(n);
    if (n<4 && n != 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (int i = 2; i <= n; i = i + 2) {
    
        // Print even numbers with a step of 2
        cout << i << " ";
    }

    // Output all odd numbers next
    for (int i = 1; i <= n; i = i + 2) {
    
        // Print odd numbers with a step of 2
        cout << i << " ";
    }
    cout << endl;
}