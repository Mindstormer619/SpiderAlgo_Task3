#include <iostream>
#include <conio.h>

using namespace std;

int sum(int n) {
	/*
	Base case: number is 0 => sum of digits is 0
	Relation: sum(digits) = lastdigit + sum(remaining)
	*/
	if (n==0) {
		return 0;
	}
	int lastDig = n%10;
	n /= 10; //removes lastdig
	return lastDig + sum(n);
}

int main() {
	cout<<"Wazzup mah dawg, this be to find yo sum of digitzz\n";
	cout<<"Entah yo numbah, dawg:\n";
	int n;
	cin>>n;
	if(n<0) {
		cout<<"Yo dawg what wrong wiz you?\n";
		return 1;
	}
	cout<<"Yoh sum izz... "<<sum(n)<<endl;
	return 0;
}