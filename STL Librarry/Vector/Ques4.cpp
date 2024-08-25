#include <bits/stdc++.h>
using namespace std;

void printvec( vector<pair <int, int> >& v) {
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << "(" << v[i].first << ", " << v[i].second << ") ";
    }
    cout << endl;
}

int main() {
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {4, 5}}; // vector of pairs
    printvec(v);
    return 0;
}

