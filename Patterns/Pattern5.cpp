#include <iostream>
using namespace std;


void print2(int n){
	for(int i=1;i<=n;i++){ // row
		for(int j=0;j<n-i+1	;j++){ // column
			cout << "*";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cout << "Enter Number:";
	cin >> n;
	print2(n);
}
