#include <iostream>
using namespace std;


void print2(int n){
	for(int i=0;i<n;i++){ // row
	//space
		for(int j=0;j<n-i-1;j++){ // column
			cout << " ";
		}
	// space
	for(int j=0;j<2*i+1;j++){ // column
			cout << '*';
		}
	for(int k=0;k<n-i-1;k++){ // column
			cout << " ";
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
