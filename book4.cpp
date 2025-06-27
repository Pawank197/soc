#include <bits/stdc++.h>
using namespace std;

vector<int> swap_sorting(vector<int> v) {
    int n = v.size();
    for(int i = 0; i<n; i++) {
        int max_idx = 0;
        for(int j = 0; j<n-i; j++) {
            if (v[j]>=v[max_idx]) max_idx = j;
        }
        swap(v[n-i-1], v[max_idx]);
    }
    return v;
}

int binarySearch(int A[], int left, int right, int target) {
    if(left>right) return -1;
    int middle = (left + right)/2;
    if(A[middle] > target) return binarySearch(A, left, middle-1, target);
    else if(A[middle] < target) return binarySearch(A, middle+1, right, target);
    else return middle;
}

int main() { 
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i<n; i++) {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    vector<int> sorted_v = swap_sorting(v);
    for(int i = 0; i<n; i++) {
        cout << sorted_v[i] << " ";
    }
}
