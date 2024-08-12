#include<iostream>
using namespace std;

int main(){
	int N= 5;
	for (int i = 0; i < N; i++) {
        // Leading spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part (including middle line)
    for (int i = 0; i < N; i++) {
        // Leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * (N - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
