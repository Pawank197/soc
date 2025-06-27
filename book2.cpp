#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {1, 3, 8, 12, 14, 16, 15, 11, 6, 2};

int f(int x) {
    return arr[x];
}

int find_peak(int z) {
    int x = -1;
    for (int b = z; b >= 1; b /= 2) {
        while (x + b + 1 < arr.size() && f(x + b) < f(x + b + 1))
            x += b;
    }
    return x + 1;
}

int main() {
    int z = 1;
    while (z < arr.size()) z *= 2;
    int peak_index = find_peak(z);
    cout << "Peak index: " << peak_index << ", Peak value: " << f(peak_index) << "\n";
    return 0;
}
