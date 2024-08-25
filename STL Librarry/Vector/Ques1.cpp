//Question:
//Create a std::vector of integers, initialize it with the values 1, 2, 3, and 4, and then print the values

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector and initialize it with values using push_back
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    // Iterate over the vector and print each value with a space
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " "; // Dereference iterator to get the value
    }
    cout << endl; // Print a newline at the end

    return 0;
}


