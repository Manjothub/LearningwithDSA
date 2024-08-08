#include <iostream>
using namespace std;


void print3(int n){
	for(int i=1;i<=n;i++){ // row
		for(int j=1;j<=i;j++){ // column
			cout << j << "";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cout << "Enter Number:";
	cin >> n;
	print3(n);
}
