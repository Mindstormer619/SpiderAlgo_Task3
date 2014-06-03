#include <iostream>
#include <conio.h>

using namespace std;

void descending_natural(int n) {
	/*
	Base: n is 1: output n
	Relation: desc_nat(n) = print n, desc_nat(n-1)
	*/
	if (1==n) {
		cout<<n<<" ";
		return;
	}
	cout<<n<<" ";
	descending_natural(n-1);
}

int main() {
	cout<<"Descending numbers from n to some 1, you give n!\n";
	int n;
	cin>>n;
	if (n<1) {
		cout<<"You, sir, are heartless!\n";
		return 1;
	}
	descending_natural(n);
	return 0;
}
