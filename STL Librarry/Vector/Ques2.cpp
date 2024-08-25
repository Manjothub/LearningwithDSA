#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,string>p;
//	p = make_pair(2,"abc");
	p = {2,"abcd"};
	pair<int,string> &p1 = p;
	p1.first = 3;
	cout << p.first <<  endl;
}
