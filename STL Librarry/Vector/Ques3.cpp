#include <bits/stdc++.h>
using namespace std;

void printvec( vector<int>& v) {
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) { // Corrected the loop condition
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(7);
    v.push_back(8);
    
    vector<int> v2 = v;
    v2.push_back(10);
//    int n;
//    cin >> n; // Read the number of elements
//    
//    for (int i = 0; i < n; ++i) {
//        int x;
//        cin >> x; // Read each element
//        v.push_back(x); // Add element to the vector
//    }
//    
    printvec(v2); // Print the vector
//    return 0;
}

