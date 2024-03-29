#include <iostream>
#include <conio.h>

using namespace std;

void ascending_natural(int n, int c) {
	/*
	Base case: c has reached n => print c
	Relation: asc_nat(n,c) = print c, asc_nat(n,c+1)
	*/
	if (c==n) {
		cout<<c<<" ";
		return;
	}
	cout<<c<<" ";
	ascending_natural(n,c+1);
}

int main() {
	cout<<"Ascending numbers from 1 to some n you give!\n";
	int n;
	cin>>n;
	if (n<1) {
		cout<<"You, sir, are heartless!\n";
		return 1;
	}
	ascending_natural(n,1);
	return 0;
}
