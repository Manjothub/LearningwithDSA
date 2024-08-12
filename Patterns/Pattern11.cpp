#include <iostream>
using namespace std;

int main(){
	int N = 3;
	for (int i = 0; i < N; i++) {
        // Start with 1 if the row is even, and 0 if the row is odd
        int start = (i % 2 == 0) ? 1 : 0;
        
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            // Alternate between 1 and 0
            start = 1 - start;
        }
        cout << endl;
    }

}
