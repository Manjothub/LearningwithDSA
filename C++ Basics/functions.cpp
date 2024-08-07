#include<iostream>
using namespace std;



void printName(string name){ // parameterizedd function
	cout << name;
}
int main(){
	string name;
	cin >> name;
    printName(name);
    return 0;
}

