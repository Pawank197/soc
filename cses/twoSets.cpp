#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // your code here
    long long n; cin >> n;
    long long sum = n*(n+1)/2;
    if (sum % 2 != 0) {
        cout << "NO" << endl;
        // return so as to not not give both yes and no as answer
        return 0;
    }

    cout << "YES" << endl;
    long long target = sum/2;

    vector<int> A, B;
    A.reserve(n/2 + 1);
    B.reserve(n/2 + 1);

    for (long long i = n; i > 0; i--) {
        if (i <= target) {
            A.push_back(i);
            target -= i;
        }
        else {
            B.push_back(i);
        }
    }

    cout << A.size() << endl;
    for (auto x : A) cout << x << " ";
    cout << endl;

    cout << B.size() << endl;
    for (auto x : B) cout << x << " ";
    cout << endl;
}
