#include <bits/stdc++.h>
using namespace std;

// Example monotonic function: returns true if x^2 >= target
int target;
bool ok(int x) {
    return x * 1LL * x >= target;
}

int find_k(int z) {
    int x = -1;
    for (int b = z; b >= 1; b /= 2) {
        while (!ok(x + b)) x += b;
    }
    return x + 1;
}

int main() {
    target = 122; // Can be set to any positive integer
    cout << "Target value: " << target << "\n";
    int z = 1;
    while (!ok(z)) z *= 2; // Ensure z is large enough that ok(z) is true
    int result = find_k(z);
    cout << "The smallest k such that k*k >= target is: " << result << "\n";
    return 0;
}
